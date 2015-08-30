#include "Screen.h"
#include "TagBase.h"

//Process initial screen
void Screen_Initial() {
	//line string
	char TagLine[MAX_SCREENINPUT_LENGTH];
	//Print Welcome
	printf("Please input tags separated by space:\n");
	//Get input line
	scanf_s("%[^\n]", &TagLine, MAX_SCREENINPUT_LENGTH);
	//Read \n
	getchar();
	//Split input line into tags
	strsplit(TagLine, &LineTagCount);
}

//Process tagging screen
void Screen_Tagging() {
	for (int i = 0; i < LineTagCount; i++)
	{
		printf("%s\n", TagList[i]);
	}
}