#pragma once

//#include <windows.h>

#ifdef LIBDELL
#define _DLLEXPORT extern "C" _declspec(dllimport)
#else
#define _DLLEXPORT extern "C" _declspec(dllexport)
#endif

#define NODE_CONTENT_MAX_LENGTH 1024

//Self pointer Node 
typedef	struct node {
	char content[NODE_CONTENT_MAX_LENGTH];
	struct node** links;
	int linkCount;
} Node;

//Compare Node
int Node_Compare(Node* node1, Node* node2);

//Sort nodes
_DLLEXPORT void Node_Sort(
	Node** nodeList, //Node List 
	int nodeCount  //Node Count
	);

//Binary Search for nodes
_DLLEXPORT int Node_Search(
	Node** nodeList, //Node List
	int nodeCount, //Node Count
	char* saerchContent //Search Content
	);

//test fun
_DLLEXPORT int testfun(int i);