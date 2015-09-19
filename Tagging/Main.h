#pragma once

#include <windows.h>

#define NODE_CONTENT_MAX_LENGTH 1024

//Self pointer Node 
typedef	struct node {
	char content[NODE_CONTENT_MAX_LENGTH];
	struct node** links;
	int linkCount;
} Node;

//Sort nodes
_declspec(dllexport) void Node_Sort(Node** nodes);

//Binary Search for nodes
_declspec(dllexport) Node* Node_Search(
	Node** nodes,
	int nodeCount,
	char* saerchContent
	);