#pragma once

#define NODE_CONTENT_MAX_LENGTH 1024

//Self pointer Node 
typedef	struct node {
	char content[NODE_CONTENT_MAX_LENGTH] ;
	Node** links;
	int linkCount;
} Node;

//Sort nodes
void Node_Sort(Node** nodes);

//Binary Search for nodes
Node* Node_Search(Node** nodes, int nodeCount, char* saerchContent);
