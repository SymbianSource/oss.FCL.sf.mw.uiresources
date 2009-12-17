/*
* Copyright (c) 1999 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
*
* Description: 
*
*/



/*

Reads and parses the Unicode collation value table and writes out a C++ source file
containing the data in a form that can be used by the EPOC collation system.

The program reads three files:

1. Base keys (maps single Unicode values to single collation key values): must be in the same format as
basekeys.txt, supplied with the Standard Unicode Collation system

2. Composite keys (maps single Unicode values to strings of collation keys): must be in the same format as
compkeys.txt, supplied with the Standard Unicode Collation system

3. Strings (maps strings of Unicode values to single collation keys OR strings of collation keys): must be in the
same format as compkeys.txt, except that there can be any number of Unicode characters at the start of the line,
space-separated and each exactly 4 hex digits.
*/

#include <assert.h>
#include <ctype.h>
#include <fstream.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*
Constants constraining the range of level-1 and level-2 keys so that they can be packed.
Non-zero values are reduced by one less than the minimum value.
*/
const unsigned int KLevel1Bits = 8;
const unsigned int KLevel1Min = 0x20;
const unsigned int KLevel1Max = KLevel1Min + (1 << KLevel1Bits) - 2;
const unsigned int KLevel2Bits = 6;
const unsigned int KLevel2Min = 1;
const unsigned int KLevel2Max = KLevel2Min + (1 << KLevel2Bits) - 2;

/*
Table of characters in the WGL4 set, plus characters in canonical decompositions of
those characters, plus commonly used control characters and space characters,
given as ranges of Unicode characters. In each pair, the first code is the first in the range,
and the second is the first code NOT in the range.

The extra characters are added mainly to ensure that control characters and spaces are
normally ignored. The extra characters are:

0x0000-0x001F: ASCII control characters
0x2000-0x2012: spaces, hyphen variants, figure dash
0x2028-0x202E: line and paragraph separator, bidirectional control characters
0xFEFF		 : byte-order mark
0xFFFC-0xFFFD: object replacement character, replacement character
*/
const unsigned short Wgl4Range[] =
	{
	0x00, 0x7f,		// All ASCII
	0xa0, 0x180,		// Non-breaking space, Latin-1, Latin Extended-A
	0x192,0x193,		// Latin f with hook
	0x1fa,0x200,		// A-ring, a-ring, AE, ae, O slash, o slash all with acute accent
	0x2c6,0x2c8,		// non-combining circumflex and caron
	0x2c9,0x2ca,		// non-combining macron
	0x2d8,0x2dc,		// non-combining breve, dot above, ring above, ogonek
	0x2dd,0x2de,		// non-combining double acute
	0x300,0x305,		// combining grave, acute, circumflex, tilde, macron
	0x306,0x309,		// combining breve, dot above, double dot above
	0x30a,0x30e,		// combining ring above, double acute, caron, vertical line above
	0x327,0x329,		// combining cedilla, ogonek
	0x384,0x38b,		// Greek
	0x38c,0x38d,		// Greek
	0x38e,0x3a2,		// Greek
	0x3a3,0x3cf,		// Greek
	0x401,0x40d,		// Cyrillic
	0x40e,0x450,		// Cyrillic
	0x451,0x45d,		// Cyrillic
	0x45e,0x460,		// Cyrillic
	0x490,0x492,		// Cyrillic
	0x1e80,0x1e86,		// Both W and w with each of grave, acute and diaeresis
	0x1ef2,0x1ef4,		// Y with grave, y with grave
	0x2000,0x2016,		// various space and horizontal lines
	0x2017,0x201f,		//double vertical line, double low line, various quotation marks
	0x2020,0x2023,		// dagger, double dagger, bullet
	0x2026,0x2027,		//ellipsis
	0x2028,0x202F,		// line & paragraph separators and directional formatting
	0x2030,0x2031,		// per mille
	0x2032,0x2034,		// prime
	0x2039,0x203b,		// single angle quotation marks
	0x203c,0x203d,		// double exclamation mark
	0x203e,0x203f,		// non-combining overscore
	0x2044,0x2045,		// fraction slash
	0x207f,0x2080,		// superscript n
	0x20a3,0x20a5,		// French Franc, Italian/Turkish Lira
	0x20a7,0x20a8,		// Spanish Peseta
	0x20ac,0x20ad,		// Euro symbol
	0x2105,0x2106,		// care of
	0x2113,0x2114,		// script l
	0x2116,0x2117,		// numero
	0x2122,0x2123,		// trade mark
	0x2126,0x2127,		// ohm
	0x212e,0x212f,		// estimated (net weight)
	0x215b,0x215f,		// 1/8, 3/8, 5/8, 7/8
	0x2190,0x2196,		// horizontal and vertical arrows
	0x21a8,0x21a9,		// up down arrow with base
	0x2202,0x2203,		// partial differential
	0x2206,0x2207,		// increment (delta)
	0x220f,0x2210,		// n-ary product (pi)
	0x2211,0x2213,		// n-ary sum (sigma), minus
	0x2215,0x2216,		// division (slash)
	0x2219,0x221b,		// bullet operator, square root
	0x221e,0x2220,		// infinity, right angle
	0x2229,0x222a,		// intersection
	0x222b,0x222c,		// union
	0x2248,0x2249,		// almost equal to
	0x2260,0x2262,		// not equal to, identical to
	0x2264,0x2266,		// less-than-or-equal-to, greater-than-or-equal-to
	0x2302,0x2303,		// house
	0x2310,0x2311,		// rversed not sign
	0x2320,0x2322,		// top and bottom of integral
	0x2500,0x2501,		// box drawing
	0x2502,0x2503,		// box drawing
	0x250c,0x250d,		// box drawing
	0x2510,0x2511,		// box drawing
	0x2514,0x2515,		// box drawing
	0x2518,0x2519,		// box drawing
	0x251c,0x251d,		// box drawing
	0x2524,0x2525,		// box drawing
	0x252c,0x252d,		// box drawing
	0x2534,0x2535,		// box drawing
	0x253c,0x253d,		// box drawing
	0x2550,0x256d,		// box drawing
	0x2580,0x2581,		// block element
	0x2584,0x2585,		// block element
	0x2588,0x2589,		// block element
	0x258c,0x258d,		// block element
	0x2590,0x2594,		// block element
	0x25a0,0x25a2,		// geometric shapes
	0x25aa,0x25ad,		// geometric shapes
	0x25b2,0x25b3,		// geometric shapes
	0x25ba,0x25bb,		// geometric shapes
	0x25bc,0x25bd,		// geometric shapes
	0x25c4,0x25c5,		// geometric shapes
	0x25ca,0x25cc,		// geometric shapes
	0x25cf,0x25d0,		// geometric shapes
	0x25d8,0x25da,		// geometric shapes
	0x25e6,0x25e7,		// geometric shapes
	0x263a,0x263d,		// smilies, sun
	0x2640,0x2641,		// female
	0x2642,0x2643,		// male
	0x2660,0x2661,		// spade
	0x2663,0x2664,		// club
	0x2665,0x2667,		// heart
	0x266a,0x266c,		// quaver, beamed quavers
	0xfb01,0xfb03,		// fi, fl ligatures
	0xfeff,0xff00,		// zero-width non-breaking space
	0xfffc, 0xfffe		// object replacement character and replacement character
	};
const int Wgl4Ranges = sizeof(Wgl4Range) / sizeof(Wgl4Range[0]) / 2;

int CompareWgl4Ranges(const void* aRange1,const void* aRange2)
	{
	unsigned short* p = (unsigned short*)aRange1;
	unsigned short* q = (unsigned short*)aRange2;
	if (q[0] == q[1])
		{
		unsigned short* temp = p;
		p = q;
		q = temp;
		}
	if (*p < *q)
		return -1;
	else if (*p >= q[1])
		return 1;
	else
		return 0;
	}

// Determine if a character is in the WGL4 character repertoire.
static bool InWgl4(unsigned short aChar)
	{
	unsigned short key[2];
	key[0] = key[1] = aChar;
	return bsearch(key,Wgl4Range,Wgl4Ranges,sizeof(Wgl4Range[0]) * 2,CompareWgl4Ranges) != NULL;
	}

// A collation key.
class CollationKey
	{
	public:
	bool operator==(const CollationKey& k) const
		{ return iLevel[0] == k.iLevel[0] && iLevel[1] == k.iLevel[1] && iLevel[2] == k.iLevel[2] &&
		  iIgnorable == k.iIgnorable && iStop == k.iStop; }

	enum
		{
		ELevels = 3
		};
	int iLevel[ELevels];// the keys at the various levels
	bool iIgnorable;	// TRUE if this key can normally be ignored
	bool iStop;			// TRUE if this is the last key in a string of keys
	};

// The collation index for a single Unicode value.
class CollationIndex
	{
	public:
	static int Compare(const void* aIndex1,const void* aIndex2);

	int iCode;			// Unicode value
	int iIndex;			// index into the key table
	};

class Reader
	{
	public:
	Reader(bool aWgl4,bool aStandard,const char* aLocaleName);
	~Reader();
	void ReadBaseKeys(const char* aFileName);
	void ReadCompKeys(const char* aFileName);
	void ReadStrings(const char* aFileName);
	void WriteOutput(const char* aFileName);
	int CompareStringIndices(int aIndex1,int aIndex2) const;

	private:
	int Hex(const char *aString,bool aTolerate = false);
	void GetCollationKey(const char* aString,CollationKey* aKey = NULL);
	void GetMultipleCollationKeys(const char* aString);
	unsigned int PackKey(const CollationKey& aValue);
	unsigned int PackIndex(const CollationIndex& aValue);
	bool ParseLine(const char* aLine,int& aCode,int& aKeyStart);

	enum
		{
		EMaxCollationKeys = 65536,
		EMaxCollationIndices = 65536,
		EMaxStringElements = 65536,
		EMaxStringIndices = 65536
		};
	CollationKey iCollationKey[EMaxCollationKeys];
	int iKeys;
	CollationIndex iCollationIndex[EMaxCollationIndices];
	int iIndices;
	unsigned short iStringElement[EMaxStringElements];
	int iStringElements;
	unsigned int iStringIndex[EMaxStringIndices];
	int iStringIndices;
	const char* iInputFileName;
	int iLineNumber;
	bool iWgl4;				// true if writing keys for wgl4 characters only
	bool iStandard;			// true if reading standard files, not tailoring files
	const char* iLocaleName;
	};

void UsageError()
	{
	cout << "Usage: coltab <locale>\n";
	cout << "For the locales 'standard' and 'wgl4' coltab reads basekeys.txt & compkeys.txt\n";
	cout << "For any other locale name <name> coltab reads <name>_basekeys.txt,\n";
	cout << "<name>_compkeys.txt and <name>_strings.txt.\n";
	cout << "The output file is always ls_<name>.cpp.";
	exit(1);
	}

int main(int argc,char** argv)
	{
	if (argc != 2)
		UsageError();
	bool wgl4 = false;
	const char* prefix = "";
	const char* infix = "";
	const char* locale = "";
	bool standard = false;
	if (!_stricmp(argv[1],"standard"))
		{
		locale = "Standard";
		standard = true;
		}
	else if (!_stricmp(argv[1],"wgl4"))
		{
		locale = "Wgl4";
		wgl4 = true;
		standard = true;
		}
	else
		{
		locale = prefix = argv[1];
		infix = "_";
		}

	Reader* reader = new Reader(wgl4,standard,locale);
	if (!reader)
		{
		cout << "out of memory\n";
		exit(1);
		}
	char* filename = new char[strlen(prefix) + 64];
	sprintf(filename,"%s%scompkeys.txt",prefix,infix);
	reader->ReadCompKeys(filename);
	if (!standard)
		{
		sprintf(filename,"%s%sstrings.txt",prefix,infix);
		reader->ReadStrings(filename);
		}
	sprintf(filename,"%s%sbasekeys.txt",prefix,infix);
	reader->ReadBaseKeys(filename);
	sprintf(filename,"ls_%s.cpp",argv[1]);
	reader->WriteOutput(filename);

	delete reader;
	delete [] filename;
	return 0;
	}

Reader::Reader(bool aWgl4,bool aStandard,const char* aLocaleName):
	iKeys(0),
	iIndices(0),
	iStringElements(0),
	iStringIndices(0),
	iInputFileName(NULL),
	iLineNumber(0),
	iWgl4(aWgl4),
	iStandard(aStandard),
	iLocaleName(aLocaleName)
	{
	}

Reader::~Reader()
	{
	}

// Get a hex number of exactly four digits from aString. Return -1 if none is found and aTolerate is true.
int Reader::Hex(const char *aString,bool aTolerate)
	{
	char *end;
	unsigned long x = strtoul(aString,&end,16);
	if (end != aString + 4)
		{
		if (!aTolerate)
			{
			cout << "bad hex number on line " << iLineNumber << " of file " << iInputFileName << '\n';
			exit(1);
			}
		return -1;
		}
	return x;
	}

// Get a collation value from a string of the form [.xxxx.xxxx.xxxx.xxxx]
void Reader::GetCollationKey(const char* aString,CollationKey* aKey)
	{
	if (aString[0] != '[' || aString[21] != ']')
		{
		cout << "syntax error on line " << iLineNumber << " of file " << iInputFileName << '\n';
		exit(1);
		}
	if (aKey == NULL)
		{
		if (iKeys >= EMaxCollationKeys)
			{
			cout << "too many keys";
			exit(1);
			}
		aKey = &iCollationKey[iKeys++];
		}
	aKey->iIgnorable = aString[1] == '*'; // asterisk means that this character is normally ignored
	for (int i = 0; i < CollationKey::ELevels; i++)
		aKey->iLevel[i] = Hex(aString + 2 + i * 5);

	if (aKey->iLevel[1] > 0 && (aKey->iLevel[1] < KLevel1Min || aKey->iLevel[1] > KLevel1Max))
		{
		cout << "illegal level-1 key value on line " << iLineNumber << "; outside the range " << KLevel1Min << ".." << KLevel1Max;
		exit(1);
		}
	if (aKey->iLevel[2] > 0 && (aKey->iLevel[2] < KLevel2Min || aKey->iLevel[2] > KLevel2Max))
		{
		cout << "illegal level-2 key value on line " << iLineNumber << "; outside the range " << KLevel2Min << ".." << KLevel2Max;
		exit(1);
		}

	aKey->iStop = true;
	}

void Reader::GetMultipleCollationKeys(const char* aString)
	{
	while (aString[0] == '[')
		{
		GetCollationKey(aString);
		iCollationKey[iKeys - 1].iStop = false;
		if (strlen(aString) <= 23)
			break;
		aString += 23;
		}
	iCollationKey[iKeys - 1].iStop = true;
	}

/*
Partially parse a line, returning its key code and the start of its first block of key data.
Return false if it is not a data line, or not relevant.
*/
bool Reader::ParseLine(const char* aLine,int& aCode,int& aKeyStart)
	{
	int line_length = strlen(aLine);
	aCode = Hex(aLine,true);

	/*
	A data line must start with a hex number and be at least 27 characters long.
	Canonically decomposable Unicode characters are skipped.
	Skip non-WGL4 characters if doing WGL4 only.
	*/
	if (aCode != -1)
		{
		if (line_length < 27 ||
			!strcmp(aLine + line_length - 8,"CANONSEQ") ||
			(iWgl4 && !InWgl4((unsigned short)aCode))) 
			aCode = -1;
		}

	if (aCode != -1)
		{
		aKeyStart = 4;
		while (aKeyStart < line_length && aLine[aKeyStart] != '[')
			aKeyStart++;
		}

	return aCode != -1;
	}

void Reader::ReadBaseKeys(const char* aFileName)
	{
	iLineNumber = 0;
	iInputFileName = aFileName;
	ifstream input_file;
	input_file.open(iInputFileName,ios::in | ios::nocreate);
	if (input_file.fail())
		{
		cout << "cannot open input file '" << iInputFileName << "'\n";
		exit(1);
		}
	cout << "reading base keys from '" << iInputFileName << "'\n";

	char line[1024];
	for (;;)
		{
		input_file.getline(line,sizeof(line));
		if (input_file.eof())
			break;
		iLineNumber++;
		if (iLineNumber % 100 == 0)
			{
			cout << "line " << iLineNumber << '\n';
			cout.flush();
			}
		int code = 0;
		int key_start = 0;
		if (ParseLine(line,code,key_start)) 
			{
			if (iIndices >= EMaxCollationIndices)
				{
				cout << "too many Unicode values";
				exit(1);
				}
			CollationIndex& index = iCollationIndex[iIndices++];
			index.iCode = code;
			index.iIndex = -1;

			/*
			First try to find the key in the array of keys found so far.
			Search backwards to use the fact that runs of the same key occur together.
			*/
			CollationKey key;
			GetCollationKey(line + key_start,&key);
			for (int i = iKeys - 1; i >= 0 && index.iIndex == -1; i--)
				if (iCollationKey[i] == key)
					index.iIndex = i;

			// If that fails, add a new key.
			if (index.iIndex == -1)
				{
				index.iIndex = iKeys++;
				if (iKeys > EMaxCollationKeys)
					{
					cout << "too many keys";
					exit(1);
					} 
				iCollationKey[index.iIndex] = key;
				}
			}
		}

	input_file.close();
	}

void Reader::ReadCompKeys(const char* aFileName)
	{
	iLineNumber = 0;
	iInputFileName = aFileName;
	ifstream input_file;
	input_file.open(iInputFileName,ios::in | ios::nocreate);
	if (input_file.fail())
		{
		cout << "there are no composite keys; '" << iInputFileName << "' not found\n";
		return;
		}
	cout << "reading composite keys from '" << iInputFileName << "'\n";

	char line[1024];
	for (;;)
		{
		input_file.getline(line,sizeof(line));
		if (input_file.eof())
			break;
		iLineNumber++;
		if (iLineNumber % 100 == 0)
			{
			cout << "line " << iLineNumber << '\n';
			cout.flush();
			}
		int code = 0;
		int key_start = 0;
		if (ParseLine(line,code,key_start)) 
			{
			if (iIndices >= EMaxCollationIndices)
				{
				cout << "too many Unicode values";
				exit(1);
				}
			CollationIndex& index = iCollationIndex[iIndices++];
			index.iCode = code;
			index.iIndex = iKeys;
			GetMultipleCollationKeys(line + key_start);
			}
		}

	input_file.close();
	}


void Reader::ReadStrings(const char* aFileName)
	{
	iLineNumber = 0;
	iInputFileName = aFileName;
	ifstream input_file;
	input_file.open(iInputFileName,ios::in | ios::nocreate);
	if (input_file.fail())
		{
		cout << "there are no strings; '" << iInputFileName << "' not found\n";
		return;
		}
	cout << "reading strings from '" << iInputFileName << "'\n";

	char line[1024];
	for (;;)
		{
		input_file.getline(line,sizeof(line));
		if (input_file.eof())
			break;
		iLineNumber++;
		if (iLineNumber % 100 == 0)
			{
			cout << "line " << iLineNumber << '\n';
			cout.flush();
			}
		int code = 0;
		int key_start = 0;
		if (ParseLine(line,code,key_start))
			{
			// Store the index to the Unicode string and the key sequence.
			if (iStringIndices > EMaxStringIndices)
				{
				cout << "too many string indices";
				exit(1);
				}
			iStringIndex[iStringIndices++] = (iStringElements << 16) | iKeys;

			// Reserve space for the length.
			if (iStringElements >= EMaxStringElements)
				{
				cout << "too many string elements";
				exit(1);
				}
			iStringElements++;

			// Read the Unicode string.
			int index = 0;
			int length = 0;
			while (index < key_start)
				{
				if (iStringElements >= EMaxStringElements)
					{
					cout << "too many string elements";
					exit(1);
					}
				iStringElement[iStringElements++] = (unsigned short)Hex(line + index);
				index += 5;
				length++;
				}
			iStringElement[iStringElements - length - 1] = (unsigned short)length;

			// Read the key sequence.
			GetMultipleCollationKeys(line + key_start);
			}
		}

	input_file.close();
	}

// Pack the 3 collation key levels into a single 32-bit integer.
unsigned int Reader::PackKey(const CollationKey& aValue)
	{
	unsigned int level0 = aValue.iLevel[0];
	unsigned int level1 = aValue.iLevel[1];
	if (level1 > 0)
		level1 -= (KLevel1Min - 1);
	unsigned int level2 = aValue.iLevel[2];
	if (level2 > 0)
		level2 -= (KLevel2Min - 1);
	unsigned int key = level0 << 16 | level1 << 8 | level2 << 2;
	if (aValue.iIgnorable)
		key |= 2;
	if (aValue.iStop)
		key |= 1;
	return key;
	}

// Pack a collation index value into a single 32-bit integer.
unsigned int Reader::PackIndex(const CollationIndex& aValue)
	{
	unsigned int code = aValue.iCode;
	unsigned int index = aValue.iIndex;
	return code << 16 | index;
	}

const Reader* TheReader;
static int CompareStringIndices(const void* aIndex1,const void* aIndex2)
	{
	return TheReader->CompareStringIndices(*(unsigned int*)aIndex1 >> 16,*(unsigned int*)aIndex2 >> 16);
	}

int CompareUnicodeStrings(const unsigned short *aString1,int aLength1,const unsigned short *aString2,int aLength2)
	{
	for (int i = 0; i < aLength1 || i < aLength2; i++, aString1++, aString2++)
		{
		int x = i < aLength1 ? *aString1 : -1;
		int y = i < aLength2 ? *aString2 : -1;
		if (x != y)
			return x - y;
		}
	return 0;
	}

int Reader::CompareStringIndices(int aIndex1,int aIndex2) const
	{
	return CompareUnicodeStrings(iStringElement + aIndex1 + 1,iStringElement[aIndex1],
								 iStringElement + aIndex2 + 1,iStringElement[aIndex2]);
	}

void Reader::WriteOutput(const char* aFileName)
	{
	ofstream output_file;
	output_file.open(aFileName);
	if (output_file.fail())
		{
		cout << "cannot open output file '" << aFileName << "'\n";
		exit(1);
		}
	cout << "writing output to '" << aFileName << "'\n";

	char *locale = NULL;
	if (iStandard)
		locale = _strdup("Standard");
	else
		locale = _strdup(iLocaleName);

	if (!iStandard)
		{
		_strupr(locale);
		output_file << "/*\nLS_" << locale << ".CPP\n\nCopyright (C) 2000 Symbian Ltd. All rights reserved.\n*/\n";
		_strlwr(locale);
		locale[0] = (char)toupper(locale[0]);
		output_file << "\n/*\nThe LCharSet object used by the " << locale << " locale.\n";
		output_file << "Generated by COLTAB.\n*/\n";

		output_file << "\n#include \"ls_std.h\"\n#include <collate.h>\n";
		output_file << "\nconst TUint KUid" << locale << "CollationMethod = /* FILL THIS IN */;\n";
		}

	/*
	Write the unique collation keys.
	Each one has the format, going from highest to lowest bit:

	16 bits:	level-0 key
	8 bits:		level-1 key
	6 bits:		level-2 key
	1 bit:		set if this key is optionally ignorable
	1 bit:		set if this is the last key in the string of keys for a single Unicode value

	*/
	if (iKeys != 0)
		{
		output_file << "\nstatic const TUint32 The" << locale << "Key[] = \n\t{";
		CollationKey* ck = iCollationKey;
		output_file << hex;
		for (int i = 0; i < iKeys; i++, ck++)
			{
			unsigned int key = PackKey(*ck);
			if (i % 8 == 0)
				output_file << "\n\t";
			output_file << "0x" << key << ",";
			}
		output_file << dec;
		output_file << "\n\t};\n\n";
		}
	
	if (iIndices != 0)
		{
		// Sort then write the collation index values - these relate Unicode values to collation keys.
		qsort(iCollationIndex,iIndices,sizeof(CollationIndex),CollationIndex::Compare);
		output_file << "static const TUint32 The" << locale << "Index[] = \n\t{";
		CollationIndex* ci = iCollationIndex;
		output_file << hex;
		for (int i = 0; i < iIndices; i++, ci++)
			{
			unsigned int key = PackIndex(*ci);
			if (i % 8 == 0)
				output_file << "\n\t";
			output_file << "0x" << key << ",";
			}
		output_file << dec;
		output_file << "\n\t};\n\n";
		}

	if (iStringElements)
		{
		// Write the Unicode strings; these are preceded by their lengths.
		output_file << "static const TUint16 The" << locale << "StringElement[] = \n\t{";
		output_file << hex;
		for (int i = 0; i < iStringElements; i++)
			{
			if (i % 8 == 0)
				output_file << "\n\t";
			output_file << "0x" << iStringElement[i] << ",";
			}
		output_file << dec;
		if (iStringElements==0)
			output_file << "0";
		output_file << "\n\t};\n\n";
		/*
		Sort then write the string index values - these relate Unicode strings to collation keys.
		Each one has the string index in the upper word and the key index in the lower word.
		*/
		TheReader = this;
		qsort(iStringIndex,iStringIndices,sizeof(iStringIndex[0]),::CompareStringIndices);
		output_file << "static const TUint32 The" << locale << "StringIndex[] = \n\t{";
		output_file << hex;
		for (i = 0; i < iStringIndices; i++)
			{
			if (i % 8 == 0)
				output_file << "\n\t";
			output_file << "0x" << iStringIndex[i] << ",";
			}
		output_file << dec;
		if (iStringIndices ==0)
			output_file << "0";
		output_file << "\n\t};\n\n";
		}

	// Write the collation table structure.
	output_file << "static const TCollationKeyTable The" << locale << "Table = \n\t{ ";
	if (iKeys)
		output_file << "The" << locale << "Key";
	else
		output_file << "0";
	if (iIndices)
		output_file << ", The" << locale << "Index, " << iIndices;
	else
		output_file << ", 0, 0";
	if (iStringElements)
		output_file << ", The" << locale << "StringElement, The" << locale << "StringIndex, " << iStringIndices << " };\n";
	else
		output_file << ", 0, 0, 0 };\n";

	if (!iStandard)
		output_file << "\nstatic const TCollationMethod TheCollationMethod[] = \n"\
			"	{\n"\
			"		{\n"\
			"		KUid" << locale << "CollationMethod, // the method for the locale\n"\
			"		NULL, // use the standard table as the main table\n"\
			"		&The" << locale << "Table, // the locale values override the standard values\n"\
			"		0 // the flags are standard\n"\
			"		},\n"\
			"		{\n"\
			"		KUidBasicCollationMethod, // the standard unlocalised method\n"\
			"		NULL, // null means use the standard table\n"\
			"		NULL, // there's no override table\n"\
			"		0 // the flags are standard\n"\
			"		}\n"\
			"	};\n"\
			"\n"\
			"static const TCollationDataSet TheCollationDataSet =\n"\
			"	{\n"\
			"	TheCollationMethod,\n"\
			"	2\n"\
			"	};"\
			"\n\n"\
			"// The one and only locale character set object.\n"\
			"const LCharSet TheCharSet =\n"\
			"	{\n"\
			"	NULL,\n"\
			"	&TheCollationDataSet\n"\
			"	};\n";

	output_file.close();
	delete [] locale;
	}

int CollationIndex::Compare(const void* aIndex1,const void* aIndex2)
	{
	return ((CollationIndex*)aIndex1)->iCode - ((CollationIndex*)aIndex2)->iCode;
	}
