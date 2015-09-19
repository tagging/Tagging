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
	Node* node;
	return node;
}

BOOL APIENTRY DllMain(
	HANDLE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
	) {
	return TRUE;
}