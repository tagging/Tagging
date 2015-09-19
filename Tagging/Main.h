#pragma once

#include <windows.h>

#define _DLLEXPORT _declspec(dllexport)

#define NODE_CONTENT_MAX_LENGTH 1024

//Self pointer Node 
typedef	struct node {
	char content[NODE_CONTENT_MAX_LENGTH];
	struct node** links;
	int linkCount;
} Node;

//Sort nodes
_DLLEXPORT void Node_Sort(Node** nodeList);

//Binary Search for nodes
_DLLEXPORT Node* Node_Search(
	Node** nodeList, //Node List
	int nodeCount, //Node Count
	char* saerchContent //Search Content
	);