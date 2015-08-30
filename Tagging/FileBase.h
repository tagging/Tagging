#pragma once

//Define max input line length
#define MAX_LINE_LENGTH 1024

//Line
typedef struct line
{
	//Line Count
	int Count;
	//Lines
	char Lines[][MAX_LINE_LENGTH];
}Line;

//Get File Lines
Line* FileLines(char* fileName);

//Read file tags in Tags.txt
FileTags* ReadTags();

//Read sub-tags in Sub.txt
FileSubs* ReadSubs();

//Get file list in current folder
FileName* GetFileList();