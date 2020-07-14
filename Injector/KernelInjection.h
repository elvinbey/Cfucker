
#pragma once
#include <string>
#include <iostream>
#include <Windows.h>
using namespace std;

string kernel;
string ioctl;
string checkdrv;

void KernelInjection()
{
	int a;
}

static DWORD GetTargetThreadIDFromProcName(const char* ProcName)
{
	HANDLE thSnapShot;
	if (thSnapShot == INVALID_HANDLE_VALUE)
	{

	}
	int PROCESSENTRY32;
	int pe = 0;
	PROCESSENTRY32 = pe;


	BOOL retval;
	while (retval)
	{
	}

	CloseHandle(thSnapShot);

	return 0;
}