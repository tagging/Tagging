#include "Main.h"

//Sort nodes
_DLLEXPORT void Node_Sort(Node** nodeList)
{
	
}

//Binary Search for nodes
_DLLEXPORT Node* Node_Search(
	Node** nodeList, //Node List 
	int nodeCount,  //Node Count
	char* saerchContent //Search Content
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