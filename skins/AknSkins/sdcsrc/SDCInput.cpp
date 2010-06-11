/*
* Copyright (c) 2003-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  ?Description
*
*/


#include <string.h>
#include <wchar.h>
#include "SDCGlobals.h"
#include "SDCInput.h"
#include "SDCCompat.h"

// Make std namespace available for compatibility
namespace std {}
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CSDCInput::CSDCInput()
    {
    iLineNumber = -1;
    iFile = NULL;
    iHash = 0;
    }

CSDCInput::~CSDCInput()
    {
    if( iFile )
        {
        fclose( iFile );
        iFile = NULL;
        }
    }

//////////////////////////////////////////////////////////////////////
// Other methods
//////////////////////////////////////////////////////////////////////

void CSDCInput::Open( const char *aFilename )
    {
    iLineNumber = 1;
    iFile = fopen( aFilename, "rb" );
    if( !iFile ) throw CSDCException( ESDCFileOpenError, "Cannot open input file" );

    int testChar1, testChar2;
    testChar1 = fgetc( iFile );
    testChar2 = fgetc( iFile );
    if( (testChar1==EOF) || (testChar2==EOF) ) throw CSDCException( ESDCPrematureEOIError, "Unicode detection failed" );
    if( (testChar1==255) && (testChar2==254) )
        {
        iUnicode = true;
        }
    else
        {
        iUnicode = false;
        }

    if( !iUnicode )
        {
        if( fseek( iFile, 0, SEEK_SET ) ) throw CSDCException( ESDCSeekError, "Seek failed after Unicode detection" );
        }

    iFirstInLine = true;

    ReadNextChar();
    }

bool CSDCInput::NextToken()
    {
    return ParseToken( L" \t", L" \t\r\n" );
    }

bool CSDCInput::NextTokenAllowLF()
    {
    return ParseToken( L" \t\r\n", L" \t\r\n" );
    }

bool CSDCInput::NextStringToken()
    {
    wcscpy( iToken, L"" );

    while( wcschr( L" \t", iNextChar ) ) ReadNextChar();
    if( iNextChar != L'\"' ) throw CSDCException( ESDCParseError, "No opening quotation mark for string found" );

    bool escaped = false;
    wchar_t escapeToken[512];
    wcscpy( escapeToken, L"" );

    ReadNextChar();
    while( iNextChar != L'\"' )
        {
        if( (iNextChar==L'\n') || (iNextChar==L'\r') || (iNextChar==WEOF) )
            throw CSDCException( ESDCParseError, "Unterminated string" );

        if( escaped )
            {
            if( iNextChar == L'>' )
                {
                escaped = false;
                wchar_t escapedCh = (wchar_t)ConvertToNumber( escapeToken );
                wcsncat( iToken, &escapedCh, 1 );
                wcscpy( escapeToken, L"" );
                }
            else
                {
                wcsncat( escapeToken, &iNextChar, 1 );
                }
            }
        else
            {
            if( iNextChar == L'<' )
                {
                escaped = true;
                }
            else
                {
                wcsncat( iToken, &iNextChar, 1 );
                }
            }
        ReadNextChar();
        }
    if( escaped ) throw CSDCException( ESDCParseError, "Unterminated escape in string" );
    ReadNextChar();

    return wcslen(iToken)>0?true:false;
    }

int CSDCInput::NextRawToken()
    {
    wcscpy( iToken, L"" );
    int count = 0;

    while( wcschr( L" \t", iNextChar ) ) ReadNextChar();
    if( iNextChar != L'[' ) throw CSDCException( ESDCParseError, "No opening [ for raw data found" );

    bool inData = false;
    wchar_t dataToken[512];
    wcscpy( dataToken, L"" );

    ReadNextChar();
    bool quit = false;
    while( !quit )
        {
        if( (iNextChar==L'\n') || (iNextChar==L'\r') || (iNextChar==WEOF) )
            throw CSDCException( ESDCParseError, "Unterminated raw data sequence, ] missing" );

        if( inData )
            {
            if( iNextChar == L' ' || iNextChar == L']')
                {
                inData = false;
                wchar_t data = (wchar_t)ConvertToNumber( dataToken );
                iToken[count] = data;
                wcscpy( dataToken, L"" );
                count++;
                }
            else
                {
                wcsncat( dataToken, &iNextChar, 1 );
                }
            }
        else
            {
            if( iNextChar != L' ' && iNextChar != L']')
                {
                inData = true;
                if( count+1 >= 512 )
                    throw CSDCException( ESDCParseError, "Raw data sequence too long, maximum is 512 items" );
                continue; // We need to skip that ReadNextChar because 0 is part of the number token
                }
            }

        if( iNextChar == L']' )
            {
            quit = true;
            // Because the next ReadNextChar is executed the trailing ] is
            // skipped.
            }

        ReadNextChar();
        }

    return count;
    }

int CSDCInput::ConvertToNumber( const wchar_t* aToken )
    {
    bool hexadecimal = false;
    if( sd_wcsncasecmp( aToken, L"0x", 2 ) == 0 ) hexadecimal = true;

    int result = 0;
    const wchar_t *p = aToken;
    if( hexadecimal ) p = p+2;

    if( *p == 0 ) throw CSDCException( ESDCParseError, "Number token is empty" );

    bool negative = false;
    if( *p == L'-' )
        {
        negative = true;
        p = p+1;
        }

    while( *p )
        {
        if( hexadecimal )
            {
            result *= 16;
            if( (*p>=L'0') && (*p<=L'9') ) result += *p - L'0';
            else if( (*p>=L'A') && (*p<=L'F') ) result += *p - L'A' + 10;
            else if( (*p>=L'a') && (*p<=L'f') ) result += *p - L'a' + 10;
            else throw CSDCException( ESDCParseError, "Non-hexadecimal character in number token" );
            }
        else
            {
            result *= 10;
            if( (*p>=L'0') && (*p<=L'9') ) result += *p - L'0';
            else throw CSDCException( ESDCParseError, "Non-numeric character in number token" );
            }

        p = p+1;
        }

    if( negative ) result = 0-result;
    return result;
    }

void CSDCInput::ConvertToAscii( char* aTarget, const wchar_t* aSource )
    {
    while( *aTarget++ = (char)*aSource++);
    }

void CSDCInput::ConvertToWchar( wchar_t* aTarget, const char* aSource )
    {
    while( *aTarget++ = (wchar_t)*aSource++);
    }

void CSDCInput::ConvertToAsciiWithCPPEscapes( char* aTarget, const wchar_t* aSource )
    {
    int srcI = 0;
    int trgI = 0;
    while( true )
        {
        char ch = (char)aSource[srcI++];
        if( !ch )
            {
            aTarget[trgI++] = ch;
            break;
            }

        switch( ch )
            {
            case '\\':
                aTarget[trgI++] = '\\';
                aTarget[trgI++] = '\\';
                break;
            default:
                aTarget[trgI++] = ch;
            }
        }
    }

TSDCColorDepth CSDCInput::ConvertToColorDepth( const wchar_t* aToken )
    {
    if( sd_wcscasecmp( aToken, L"1" ) == 0) return ESDCColorDepth1;
    else if( sd_wcscasecmp( aToken, L"2" ) == 0) return ESDCColorDepth2;
    else if( sd_wcscasecmp( aToken, L"4" ) == 0) return ESDCColorDepth4;
    else if( sd_wcscasecmp( aToken, L"8" ) == 0) return ESDCColorDepth8;
    else if( sd_wcscasecmp( aToken, L"c4" ) == 0) return ESDCColorDepthC4;
    else if( sd_wcscasecmp( aToken, L"c8" ) == 0) return ESDCColorDepthC8;
    else if( sd_wcscasecmp( aToken, L"c12" ) == 0) return ESDCColorDepthC12;
    else if( sd_wcscasecmp( aToken, L"c16" ) == 0) return ESDCColorDepthC16;
    else if( sd_wcscasecmp( aToken, L"c24" ) == 0) return ESDCColorDepthC24;
    else if( sd_wcscasecmp( aToken, L"c32" ) == 0) return ESDCColorDepthC32;
    throw CSDCException( ESDCParseError, "Unknown color depth parameter" );
    }

int CSDCInput::ConvertToLayer( const wchar_t* aToken )
    {
    if( sd_wcscasecmp( aToken, L"none" ) == 0 ) return 0x0001;

    wchar_t buf[512];
    wcscpy( buf, aToken );

    wchar_t* p = wcsstr( buf, L"/" );
    if( !p ) throw CSDCException( ESDCParseError, "Slash expected in layer parameter" );
    *p = 0;
    p = p+1;

    int layer = ConvertToNumber( buf ) << 8;
    if( sd_wcscasecmp( p, L"RGB" ) == 0 )
        {
        layer |= 0x02;
        }
    else if( sd_wcscasecmp( p, L"A" ) == 0 )
        {
        layer |= 0x04;
        }
    else if( sd_wcscasecmp( p, L"RGBA" ) == 0 )
        {
        layer |= 0x08;
        }
    else
        {
        throw CSDCException( ESDCParseError, "Unidentified layer specifier" );
        }

    return layer;
    }

bool CSDCInput::IsSvgFile( const wchar_t* aFilename )
    {
    int len = wcslen( aFilename );
    if( len<4 ) return false;

    const wchar_t* p = aFilename + len - 4;
    if( sd_wcscasecmp( p, L".svg" ) == 0 )
        {
        return true;
        }
    return false;
    }

void CSDCInput::RawRead()
    {
    if( iUnicode )
        {
#if (defined(__MSVCRT__) || defined(_MSC_VER))
        iNextChar = fgetwc( iFile );
#else
        /* Workaround for linux */
        char c1 = fgetc(iFile);
        char c2 = fgetc(iFile);
        
        iNextChar = c1 | (c2 << 8);
#endif
        }
    else
        {
        int ch = fgetc( iFile );
        if( ch == EOF )
            {
            iNextChar = WEOF;
            }
        else
            {
            iNextChar = ch;
            }
        }

    iHash += iNextChar;
    }

bool CSDCInput::ReadNextChar()
    {
    RawRead();

    if( iFirstInLine )
        {
        iFirstInLine = false;
        if( iNextChar == L'/' )
            {
            while( (iNextChar!=L'\n') && (iNextChar!=WEOF) ) RawRead();
            }
        }

    if( iNextChar == L'\n' )
        {
        iLineNumber++;
        iFirstInLine = true;
        }

    return iNextChar==WEOF?false:true;
    }

bool CSDCInput::ParseToken( const wchar_t* aSeparators, const wchar_t* aTerminators )
    {
    wcscpy( iToken, L"" );

    while( wcschr( aSeparators, iNextChar ) )
        {
        ReadNextChar();
        }
    if( iNextChar == WEOF ) return false;

    while( !wcschr( aTerminators, iNextChar ) )
        {
        if( iNextChar == WEOF ) break;

        wcsncat( iToken, &iNextChar, 1 );

        ReadNextChar();
        }

    return wcslen(iToken)>0?true:false;
    }

// End of file
