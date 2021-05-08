#pragma once
#include <Windows.h>
extern "C" {
	FARPROC g_GetFileVersionInfoA;
	FARPROC g_GetFileVersionInfoByHandle;
	FARPROC g_GetFileVersionInfoExA;
	FARPROC g_GetFileVersionInfoExW;
	FARPROC g_GetFileVersionInfoSizeA;
	FARPROC g_GetFileVersionInfoSizeExA;
	FARPROC g_GetFileVersionInfoSizeExW;
	FARPROC g_GetFileVersionInfoSizeW;
	FARPROC g_GetFileVersionInfoW;
	FARPROC g_VerFindFileA;
	FARPROC g_VerFindFileW;
	FARPROC g_VerInstallFileA;
	FARPROC g_VerInstallFileW;
	FARPROC g_VerLanguageNameA;
	FARPROC g_VerLanguageNameW;
	FARPROC g_VerQueryValueA;
	FARPROC g_VerQueryValueW;
}