#include <Windows.h>

const auto Library = LoadLibrary("../../../Engine/Binaries/ThirdParty/PhysX/APEX-1.3/Win64/VS2013/ApexFrameworkPROFILE_x64_orig.dll");

const auto OrigNiGetApexSDK = (void*(*)())(GetProcAddress(Library, "NiGetApexSDK"));
extern "C" __declspec(dllexport) void *NiGetApexSDK()
{
	return OrigNiGetApexSDK();
}

const auto OrigNxCreateApexSDK = (void*(*)(void*, void*, int))(GetProcAddress(Library, "NxCreateApexSDK"));
extern "C" __declspec(dllexport) void *NxCreateApexSDK(void *a1, void *a2, int a3)
{
	return OrigNxCreateApexSDK(a1, a2, a3);
}

const auto OrigNxGetApexSDK = (void*(*)())(GetProcAddress(Library, "NxGetApexSDK"));
extern "C" __declspec(dllexport) void *NxGetApexSDK()
{
	return OrigNxGetApexSDK();
}

const auto OrigNxGetApexSDKVersionString = (void*(*)(int))(GetProcAddress(Library, "NxGetApexSDKVersionString"));
extern "C" __declspec(dllexport) void *NxGetApexSDKVersionString(int a1)
{
	return OrigNxGetApexSDKVersionString(a1);
}