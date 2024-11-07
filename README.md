# GIS

### AUTHOR: INFO 03
### Version  1.0


## Table of contents



### Class Index
#### Class List
Here are the classes, structs, unions and interfaces with brief descriptions:
Line  	pagenum
Point  	pagenum
Poly  	pagenum


### File Index
#### File List
Here is a list of all files with brief descriptions:
C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/framework.h  	pagenum
C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Line.cpp  	pagenum
C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Line.h  	pagenum
C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Point.cpp  	pagenum
C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Point.h  	pagenum
C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Poly.cpp  	pagenum
C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Poly.h  	pagenum
C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Resource.h  	pagenum
C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/targetver.h  	pagenum
C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/WindowsProject1.cpp  	pagenum
C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/WindowsProject1.h  	pagenum


### Class Documentation
#### Line Class Reference
```
#include <Line.h>
```
Public Member Functions
0)	Line (Point _p1, Point _p2)
1)	void Draw (HDC memDC)

Constructor & Destructor Documentation
Line::Line (Point  _p1, Point  _p2)
AAAAAAAABQAAAAAAAABQ
Member Function Documentation
void Line::Draw (HDC  memDC)
AAAAAAAABRAAAAAAAABR
The documentation for this class was generated from the following files:
0)	C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Line.h
1)	C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Line.cpp


Point Class Reference
AAAAAAAABSAAAAAAAABS
#include <Point.h>
Public Member Functions
0)	Point (int _x, int _y)
1)	Point ()
2)	int getX ()
3)	int getY ()

Constructor & Destructor Documentation
Point::Point (int  _x, int  _y)
AAAAAAAABTAAAAAAAABTPoint::Point ()
AAAAAAAABUAAAAAAAABU
Member Function Documentation
int Point::getX ()
AAAAAAAABVAAAAAAAABVint Point::getY ()
AAAAAAAABWAAAAAAAABW
The documentation for this class was generated from the following files:
0)	C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Point.h
1)	C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Point.cpp


Poly Class Reference
AAAAAAAABXAAAAAAAABX
#include <Poly.h>
Public Member Functions
0)	void Fill ()

Member Function Documentation
void Poly::Fill ()
AAAAAAAABYAAAAAAAABY
The documentation for this class was generated from the following files:
0)	C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Poly.h
1)	C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Poly.cpp

File Documentation
C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/framework.h File Reference
AAAAAAAAAHAAAAAAAAAH#include "targetver.h"
#include <windows.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
Include dependency graph for framework.h:
IMAGE

This graph shows which files directly or indirectly include this file:
IMAGE

Macros
0)	#define WIN32_LEAN_AND_MEAN

Macro Definition Documentation
#define WIN32_LEAN_AND_MEAN
AAAAAAAAAIAAAAAAAAAI

framework.h
AAAAAAAAAAAAAAAAAAAAGo to the documentation of this file.
1 // header.h : include file for standard system include files,
2 // or project specific include files
3 //
4 
5 #pragma once
6 
7 #include "targetver.h"
8 #define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
9 // Windows Header Files
10 #include <windows.h>
11 // C RunTime Header Files
12 #include <stdlib.h>
13 #include <malloc.h>
14 #include <memory.h>
15 #include <tchar.h>


C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Line.cpp File Reference
AAAAAAAAAJAAAAAAAAAJ#include "Line.h"
Include dependency graph for Line.cpp:
IMAGE



C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Line.h File Reference
AAAAAAAAAKAAAAAAAAAK#include "framework.h"
#include "Point.h"
Include dependency graph for Line.h:
IMAGE

This graph shows which files directly or indirectly include this file:
IMAGE

Classes
class Line

Line.h
AAAAAAAAABAAAAAAAAABGo to the documentation of this file.
1 #ifndef _LINE_H
2 #define _LINE_H
3 #include "framework.h"
4 #include "Point.h"
5 
6 class Line {
7   private:
8     Point p1;
9     Point p2;
10 
11   public:
12       Line(Point _p1, Point _p2);
13       void Draw(HDC memDC);
14 
15 };
16 #endif


C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Point.cpp File Reference
AAAAAAAAALAAAAAAAAAL#include "Point.h"
Include dependency graph for Point.cpp:
IMAGE



C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Point.h File Reference
AAAAAAAAAMAAAAAAAAAMThis graph shows which files directly or indirectly include this file:
IMAGE

Classes
class Point

Point.h
AAAAAAAAACAAAAAAAAACGo to the documentation of this file.
1 #ifndef _POINT_H
2 #define _POINT_H
3 
4 
5 class Point {
6   private:
7     int xVal;
8     int yVal;
9 
10 public:
11     Point(int _x, int _y);
12     Point();
13     int getX();
14     int getY();
15 
16 };
17 #endif


C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Poly.cpp File Reference
AAAAAAAAANAAAAAAAAAN#include "Poly.h"
Include dependency graph for Poly.cpp:
IMAGE



C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Poly.h File Reference
AAAAAAAAAOAAAAAAAAAO#include "Line.h"
#include <vector>
Include dependency graph for Poly.h:
IMAGE

This graph shows which files directly or indirectly include this file:
IMAGE

Classes
class Poly

Poly.h
AAAAAAAAADAAAAAAAAADGo to the documentation of this file.
1 #ifndef _POLY_H
2 #define _POLY_H
3 
4 
5 #include "Line.h"
6 #include <vector>
7 
8 class Poly {
9   private:
10     std::vector<Line> Shape;
11 
12 
13   public:
14     void Fill();
15 
16 };
17 #endif


C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/Resource.h File Reference
AAAAAAAAAPAAAAAAAAAPThis graph shows which files directly or indirectly include this file:
IMAGE

Macros
0)	#define IDS_APP_TITLE  103
1)	#define IDR_MAINFRAME  128
2)	#define IDD_WINDOWSPROJECT1_DIALOG  102
3)	#define IDD_ABOUTBOX  103
4)	#define IDM_ABOUT  104
5)	#define IDM_EXIT  105
6)	#define IDI_WINDOWSPROJECT1  107
7)	#define IDI_SMALL  108
8)	#define IDC_WINDOWSPROJECT1  109
9)	#define IDC_MYICON  2
10)	#define IDC_STATIC  -1

Macro Definition Documentation
#define IDC_MYICON  2
AAAAAAAAAQAAAAAAAAAQ#define IDC_STATIC  -1
AAAAAAAAARAAAAAAAAAR#define IDC_WINDOWSPROJECT1  109
AAAAAAAAASAAAAAAAAAS#define IDD_ABOUTBOX  103
AAAAAAAAATAAAAAAAAAT#define IDD_WINDOWSPROJECT1_DIALOG  102
AAAAAAAAAUAAAAAAAAAU#define IDI_SMALL  108
AAAAAAAAAVAAAAAAAAAV#define IDI_WINDOWSPROJECT1  107
AAAAAAAAAWAAAAAAAAAW#define IDM_ABOUT  104
AAAAAAAAAXAAAAAAAAAX#define IDM_EXIT  105
AAAAAAAAAYAAAAAAAAAY#define IDR_MAINFRAME  128
AAAAAAAAAZAAAAAAAAAZ#define IDS_APP_TITLE  103
AAAAAAAABAAAAAAAAABA

Resource.h
AAAAAAAAAEAAAAAAAAAEGo to the documentation of this file.
1 //{{NO_DEPENDENCIES}}
2 // Microsoft Visual C++ generated include file.
3 // Used by WindowsProject1.rc
4 
5 #define IDS_APP_TITLE           103
6 
7 #define IDR_MAINFRAME           128
8 #define IDD_WINDOWSPROJECT1_DIALOG  102
9 #define IDD_ABOUTBOX            103
10 #define IDM_ABOUT               104
11 #define IDM_EXIT                105
12 #define IDI_WINDOWSPROJECT1         107
13 #define IDI_SMALL               108
14 #define IDC_WINDOWSPROJECT1         109
15 #define IDC_MYICON              2
16 #ifndef IDC_STATIC
17 #define IDC_STATIC              -1
18 #endif
19 // Next default values for new objects
20 //
21 #ifdef APSTUDIO_INVOKED
22 #ifndef APSTUDIO_READONLY_SYMBOLS
23 
24 #define _APS_NO_MFC                 130
25 #define _APS_NEXT_RESOURCE_VALUE    129
26 #define _APS_NEXT_COMMAND_VALUE     32771
27 #define _APS_NEXT_CONTROL_VALUE     1000
28 #define _APS_NEXT_SYMED_VALUE       110
29 #endif
30 #endif


C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/targetver.h File Reference
AAAAAAAABBAAAAAAAABB#include <SDKDDKVer.h>
Include dependency graph for targetver.h:
IMAGE

This graph shows which files directly or indirectly include this file:
IMAGE



targetver.h
AAAAAAAAAFAAAAAAAAAFGo to the documentation of this file.
1 #pragma once
2 
3 // // Including SDKDDKVer.h defines the highest available Windows platform.
4 // If you wish to build your application for a previous Windows platform, include WinSDKVer.h and
5 // set the _WIN32_WINNT macro to the platform you wish to support before including SDKDDKVer.h.
6 #include <SDKDDKVer.h>


C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/WindowsProject1.cpp File Reference
AAAAAAAABCAAAAAAAABC#include "framework.h"
#include "WindowsProject1.h"
#include "point.h"
#include "line.h"
Include dependency graph for WindowsProject1.cpp:
IMAGE

Macros
0)	#define MAX_LOADSTRING  100
Functions
0)	ATOM MyRegisterClass (HINSTANCE hInstance)
1)	BOOL InitInstance (HINSTANCE, int)
2)	LRESULT CALLBACK WndProc (HWND, UINT, WPARAM, LPARAM)
3)	INT_PTR CALLBACK About (HWND, UINT, WPARAM, LPARAM)
4)	int APIENTRY wWinMain (_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR lpCmdLine, _In_ int nCmdShow)
Variables
0)	HINSTANCE hInst
1)	WCHAR szTitle [MAX_LOADSTRING]
2)	WCHAR szWindowClass [MAX_LOADSTRING]
3)	const int WIDTH = 100
4)	const int HEIGHT = 100

Macro Definition Documentation
#define MAX_LOADSTRING  100
AAAAAAAABDAAAAAAAABD
Function Documentation
INT_PTR CALLBACK About (HWND  hDlg, UINT  message, WPARAM  wParam, LPARAM  lParam)
AAAAAAAABEAAAAAAAABEBOOL InitInstance (HINSTANCE  hInstance, int  nCmdShow)
AAAAAAAABFAAAAAAAABFATOM MyRegisterClass (HINSTANCE  hInstance)
AAAAAAAABGAAAAAAAABGLRESULT CALLBACK WndProc (HWND  hWnd, UINT  message, WPARAM  wParam, LPARAM  lParam)
AAAAAAAABHAAAAAAAABHint APIENTRY wWinMain (_In_ HINSTANCE  hInstance, _In_opt_ HINSTANCE  hPrevInstance, _In_ LPWSTR  lpCmdLine, _In_ int  nCmdShow)
AAAAAAAABIAAAAAAAABI
Variable Documentation
const int HEIGHT = 100
AAAAAAAABJAAAAAAAABJHINSTANCE hInst
AAAAAAAABKAAAAAAAABKWCHAR szTitle[MAX_LOADSTRING]
AAAAAAAABLAAAAAAAABLWCHAR szWindowClass[MAX_LOADSTRING]
AAAAAAAABMAAAAAAAABMconst int WIDTH = 100
AAAAAAAABNAAAAAAAABN

C:/Users/radub/source/repos/Solution1/GIS/WindowsProject1/WindowsProject1.h File Reference
AAAAAAAABOAAAAAAAABO#include "resource.h"
Include dependency graph for WindowsProject1.h:
IMAGE

This graph shows which files directly or indirectly include this file:
IMAGE



WindowsProject1.h
AAAAAAAAAGAAAAAAAAAGGo to the documentation of this file.
1 #pragma once
2 
3 #include "resource.h"

Index
INDEX
