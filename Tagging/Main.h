#pragma once

#define _TEST_MODE_
#define NODE_CONTENT_MAX_LENGTH 1024

//Self pointer Node 
typedef	struct node {
	char content[NODE_CONTENT_MAX_LENGTH] ;
	Node** links;
} Node;
