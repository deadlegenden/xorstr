#pragma once
#include <windows.h>
#define encStrA
#define endEncStr
__forceinline char* decode(const char* enc, const char* key, DWORD encLen)
{
	char* unEnc = (char*)LocalAlloc(LPTR, encLen + 1);
	unEnc[encLen] = 0;
	for (DWORD i = 0; i < encLen; ++i)
		unEnc[i] = enc[i] ^ key[i % lstrlenA(key)];
	return unEnc;
}