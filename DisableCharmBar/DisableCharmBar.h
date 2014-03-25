// DisableCharmBar.h

#pragma once
#pragma comment(lib, "User32.lib")
#pragma comment(lib, "oleaut32.lib")
#pragma comment(lib, "ole32.lib")
#pragma comment(lib, "shell32.lib")
#include <shlobj.h>
#include <assert.h>
#include <windows.h>
#include <iostream>
#include <propsys.h>
#include <propkey.h>



extern "C" __declspec(dllexport) bool DisableCharmbar(HWND hWnd);