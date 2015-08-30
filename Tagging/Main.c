#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Main.h"

//Define line tag count
int LineTagCount = 0;

//Get File Lines
Line* FileBase_Lines(char* fileName)
{
	
}

//Read file tags in Tags.txt
FileTags* ReadTags()
{
	//Malloc fileTags
	FileTags* filetags = (FileTags*)malloc(sizeof(FileTags));
	//Read lines in file Tags.txt
	Line* lines = FileLines("Tags.txt");
	//Malloc tagNames 
	filetags->tagNames = (TagName*)malloc(sizeof(TagName) * lines->Count);
	//Analysis lines for fileName and tags

	//Append fileTags

	return filetags;
}

//Read sub-tags in Sub.txt
FileSubs* ReadSubs()
{
	//Malloc FileSubs
	FileSubs* filesubs = (FileSubs*)malloc(sizeof(FileSubs));
	//Read lines in file Sub.txt
	Line* lines = FileLines("Sub.txt");
	//Malloc subtagNames 
	filesubs->subtagNames = (TagName*)malloc(sizeof(TagName) * lines->Count);
	//Analysis lines for tagName and subtagNames

	//Append FileSubs

	return filesubs;
}

//Get file list in current folder
FileName* GetFileList() 
{

}

//Set filename as default tag
void SetDefaultTag(FileTags* filetags, FileName* filenames)
{

}

//Scan files for tags
void FileScan()
{
	//Read file tags in Tags.txt
	FileTags* filetags = ReadTags();
	//Read sub-tags in Sub.txt
	FileSubs* filesubs = ReadSubs();
	//Get file list in current folder
	FileName* filenames = GetFileList();
	//Set filename as default tag
	SetDefaultTag(filetags, filenames);
}

//Split string by space
void strsplit(char* scr, int* count)
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

//Process initial screen
void Initial_Screen() {
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
void Tagging_Screen() {
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
		Initial_Screen();
		//Process tagging screen
		Tagging_Screen();
	}
	return 0;
}