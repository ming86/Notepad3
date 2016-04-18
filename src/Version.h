/******************************************************************************
*                                                                             *
*                                                                             *
* Notepad3                                                                    *
*                                                                             *
* Version.h                                                                   *
*   Based on code from Notepad2-mod, (c) XhmikosR 2010-2015                   *
*                                                                             *
*                                                  (c) Rizonesoft 2008-2016   *
*                                                    https://rizonesoft.com   *
*                                                                             *
*                                                                             *
*******************************************************************************/

#ifndef NOTEPAD3_VERSION_H
#define NOTEPAD3_VERSION_H

#include "VersionEx.h"

#ifndef _T
#if !defined(ISPP_INVOKED) && (defined(UNICODE) || defined(_UNICODE))
#define _T(text) L##text
#else
#define _T(text) text
#endif
#endif

#define DO_STRINGIFY(x) _T(#x)
#define STRINGIFY(x)    DO_STRINGIFY(x)

#define MY_APPNAME                   L"Notepad3"
#define VERSION_FILEVERSION_NUM      VERSION_MAJOR,VERSION_MINOR,VERSION_REV,VERSION_BUILD
#define VERSION_FILEVERSION          STRINGIFY(VERSION_MAJOR) "." STRINGIFY(VERSION_MINOR) "." \
                                     STRINGIFY(VERSION_REV) "." STRINGIFY(VERSION_BUILD)
#define VERSION_LEGALCOPYRIGHT		 L"Copyright � 2008-2016 Rizonesoft"
//#define VERSION_LEGALCOPYRIGHT_LONG  L"� Rizonesoft 2008-2016"
#define VERSION_AUTHORNAME           L"Rizonesoft"
#define VERSION_WEBPAGEDISPLAY       L"https://rizonesoft.com"
#define VERSION_COMPANYNAME          L"Rizonesoft"
#define VERSION_MODPAGEDISPLAY       L"https://xhmikosr.github.io/notepad2-mod/"
#define VERSION_WEBPAGE2DISPLAY      L"http://www.flos-freeware.ch"

#if defined(_WIN64)
   #define VERSION_FILEVERSION_LONG  L"Notepad3 (64-bit) " STRINGIFY(VERSION_MAJOR) L" Build " \
                                     STRINGIFY(VERSION_BUILD)
#else
   #define VERSION_FILEVERSION_LONG  L"Notepad3 " STRINGIFY(VERSION_MAJOR) L" Build " \
                                     STRINGIFY(VERSION_BUILD)
#endif

// Compiler specific
#if defined(WDK_BUILD)
    #if _MSC_VER == 1600
        #if (_MSC_FULL_VER >= 160040219)
            #define VERSION_COMPILER    L"WDK (Microsoft Visual C++ 2010 SP1)"
        #else
            #define VERSION_COMPILER    L"WDK (Microsoft Visual C++ 2010)"
        #endif
    #elif _MSC_VER == 1500
        #if (_MSC_FULL_VER == 150030729)
            #define VERSION_COMPILER    L"WDK"
        #else
            #define VERSION_COMPILER    L"WDK (version unknown)"
        #endif
    #endif
#elif defined(_MSC_VER)
    #if _MSC_VER == 1900
        #if (_MSC_FULL_VER == 190023506)
            #define VERSION_COMPILER    L"Microsoft Visual C++ Update 1"
        #elif (_MSC_FULL_VER == 190023026)
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2015"
        #elif (_MSC_FULL_VER < 190023026)
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2015 Preview/Beta/RC"
        #else
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2015"
        #endif
    #elif _MSC_VER == 1800
        #if (_MSC_FULL_VER == 180040629)
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2013 Update 5"
        #elif (_MSC_FULL_VER == 180031101)
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2013 Update 4"
        #elif (_MSC_FULL_VER == 180030723)
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2013 Update 3"
        #elif (_MSC_FULL_VER == 180030501)
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2013 Update 2"
        #elif (_MSC_FULL_VER < 180021005)
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2013 Preview/Beta/RC"
        #else
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2013"
        #endif
    #elif _MSC_VER == 1700
        #if (_MSC_FULL_VER == 170061030)
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2012 Update 4"
        #elif (_MSC_FULL_VER == 170060610)
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2012 Update 3"
        #elif (_MSC_FULL_VER == 170060315)
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2012 Update 2"
        #elif (_MSC_FULL_VER == 170051106)
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2012 Update 1"
        #elif (_MSC_FULL_VER < 170050727)
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2012 Beta/RC/PR"
        #else
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2012"
        #endif
    #elif _MSC_VER == 1600
        #if (_MSC_FULL_VER >= 160040219)
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2010 SP1"
        #else
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2010"
        #endif
    #elif _MSC_VER == 1500
        #if (_MSC_FULL_VER >= 150030729)
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2008 SP1"
        #else
            #define VERSION_COMPILER    L"Microsoft Visual C++ 2008"
        #endif
    #else
        #define VERSION_COMPILER        L"Microsoft Visual C++ (version unknown)"
    #endif
#else
    #define VERSION_COMPILER            L"(Unknown compiler)"
#endif

#endif // NOTEPAD3_VERSION_H