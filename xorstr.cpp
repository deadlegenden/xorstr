#include "Decode.h"

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	//Previous MessageBoxA(0, encStrA"Hello World"endEncStr, encStrA"Title"endEncStr, 0);
	MessageBoxA(0, decode("\x000F\x000B\x000E\x0059\x002B\x0058\x001E\x000B\x0006\x0023\x0056\x0068", "Gnb5DxIdtO2I", 12), decode("\x0025\x001D\x0033\x0058\x002F", "qtG4J", 5), 0);
}
