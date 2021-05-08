
#include "version.h"

TCHAR tzPath[MAX_PATH];
HMODULE sysdll;

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
		GetSystemDirectory(tzPath, MAX_PATH);
		lstrcat(tzPath, TEXT("\\version"));
		sysdll = LoadLibrary(tzPath);
		if (sysdll != NULL) {
			g_GetFileVersionInfoA = GetProcAddress(sysdll, "GetFileVersionInfoA");
			g_GetFileVersionInfoByHandle = GetProcAddress(sysdll, "GetFileVersionInfoByHandle");
			g_GetFileVersionInfoExA = GetProcAddress(sysdll, "GetFileVersionInfoExA");
			g_GetFileVersionInfoExW = GetProcAddress(sysdll, "GetFileVersionInfoExW");
			g_GetFileVersionInfoSizeA = GetProcAddress(sysdll, "GetFileVersionInfoSizeA");
			g_GetFileVersionInfoSizeExA = GetProcAddress(sysdll, "GetFileVersionInfoSizeExA");
			g_GetFileVersionInfoSizeExW = GetProcAddress(sysdll, "GetFileVersionInfoSizeExW");
			g_GetFileVersionInfoSizeW = GetProcAddress(sysdll, "GetFileVersionInfoSizeW");
			g_GetFileVersionInfoW = GetProcAddress(sysdll, "GetFileVersionInfoW");
			g_VerFindFileA = GetProcAddress(sysdll, "VerFindFileA");
			g_VerFindFileW = GetProcAddress(sysdll, "VerFindFileW");
			g_VerInstallFileA = GetProcAddress(sysdll, "VerInstallFileA");
			g_VerInstallFileW = GetProcAddress(sysdll, "VerInstallFileW");
			g_VerLanguageNameA = GetProcAddress(sysdll, "VerLanguageNameA");
			g_VerLanguageNameW = GetProcAddress(sysdll, "VerLanguageNameW");
			g_VerQueryValueA = GetProcAddress(sysdll, "VerQueryValueA");
			g_VerQueryValueW = GetProcAddress(sysdll, "VerQueryValueW");
		}
		
		/***Do what you want here,for example:(If U want to do more thing, U'd better load your custom DLL here)***/
		//MessageBoxA(NULL,"You have been hijacked!",NULL,NULL);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}


