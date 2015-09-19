#include "Main.h"

//Sort nodes
_declspec(dllexport) void Node_Sort(Node** nodes)
{
	
}

//Binary Search for nodes
_declspec(dllexport) Node* Node_Search(
	Node** nodes, 
	int nodeCount, 
	char* saerchContent
	) {
	Node* node = 0;
	return node;
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
	)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}