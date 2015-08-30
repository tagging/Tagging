#include"StringBase.h"
#include"TagBase.h"
#include<stdio.h>
#include <string.h>

//Split string by space
void StringBase_Strsplit(char* scr, int* count)
{
	//saveptr required parameter for strtok_s
	char *saveptr, *token;
	//Init count
	*count = 0;
	//Get first tag from input line
	token = strtok_s(scr, " ", &saveptr);
	while (token != NULL) {
		//Get tag from input line and set counter
		strcpy_s(TagList[(*count)++], MAX_TAG_LENGTH, token);
		//Get Next tag from input line
		token = strtok_s(NULL, " ", &saveptr);
	}
}