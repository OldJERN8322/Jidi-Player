#include <ostream>
#include <windows.h>
#include <thread>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma comment(lib, "OmniMIDI_Win64.lib")

#include <OmniMIDI.h>
#include <MidiFile.h>

// Graphics libraries (Need ig but. Coming soon)
//#include <d3d11.h>
//#include <dxcapi.h>
//#include <dxcore.h>
//#include <dxdiag.h>
//#include <d3dcompiler.h>

using namespace std;

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) {
	InitializeKDMAPIStream();
	cout << "Hello World!" << endl;
	Sleep(400);
	DWORD noteOn = 0x90 | (60 << 8) | (127 << 16);
	SendDirectData(noteOn);

	Sleep(500);

	DWORD noteOff = 0x90 | (60 << 8);
	SendDirectData(noteOff);

}