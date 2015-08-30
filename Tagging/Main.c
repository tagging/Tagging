#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Main.h"

//Define line tag count
int LineTagCount = 0;

//Set filename as default tag
void SetDefaultTag(FileTags* filetags, FileName* filenames)
{

}

//Scan files for tags
void FileScan()
{
	//Read file tags in Tags.txt
	FileTags* filetags = FileBase_ReadTags();
	//Read sub-tags in Sub.txt
	FileSubs* filesubs = FileBase_ReadSubs();
	//Get file list in current folder
	FileName* filenames = FileBase_GetFileList();
	//Set filename as default tag
	SetDefaultTag(filetags, filenames);
}

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

int main()
{
	//Scan files for tags
	FileScan();
	//Tagging
	while (1)
	{
		//Process initial screen
		Screen_Initial();
		//Process tagging screen
		Screen_Tagging();
	}
	return 0;
}
