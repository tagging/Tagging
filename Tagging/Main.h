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