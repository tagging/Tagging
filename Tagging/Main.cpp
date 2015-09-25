#include "Main.h"

//Compare Node
int Node_Compare(Node* node1, Node* node2){
	return strcmp(node1->content, node2->content);
}

//Sort nodes
_DLLEXPORT void Node_Sort(
//void Node_Sort(
	Node** nodeList, //Node List 
	int nodeCount  //Node Count
	)
{
	int i, j;
	Node* tempNode;
	for (i = 0; i < nodeCount - 1; i++){
		for (j = i + 1; j < nodeCount; j++){
			if (Node_Compare(nodeList[i], nodeList[j]) > 0){ //if a > b reverse
				tempNode = nodeList[i];
				nodeList[i] = nodeList[j];
				nodeList[j] = tempNode;
			}
		}
	}
}

//Binary Search for nodes
_DLLEXPORT int Node_Search(
//int Node_Search(
	Node** nodeList, //Node List 
	int nodeCount,  //Node Count
	char* saerchContent //Search Content
	) {
	int low, high, mid;
	low = 0;
	high = nodeCount - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (strcmp(saerchContent, nodeList[mid]->content) < 0) 
			high = mid - 1;
		else if (strcmp(saerchContent, nodeList[mid]->content) > 0)
			low = mid + 1;
		else return mid;
	}
	return -1;
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
