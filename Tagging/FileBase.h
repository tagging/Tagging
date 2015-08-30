#pragma once

//Define max input line length
#define MAX_FILELINE_LENGTH 1024

//Define max file name length
#define MAX_FILENAME_LENGTH 128

//File name
typedef char FileName[MAX_FILENAME_LENGTH];

//Line
typedef struct line
{
	//Line Count
	int Count;
	//Lines
	char Lines[][MAX_FILELINE_LENGTH];
}Line;

//Type Filetags:File name and tag list
typedef struct fileTags
{
	//File name
	FileName fileName;
	//Tag list
	TagName* tagNames;
}FileTags;

//Type FileSubs: Tag name and sub-tag list
typedef struct filesubs
{
	//Tag name
	TagName tagName;
	//Sub-tag list
	TagName* subtagNames;
}FileSubs;

//Get File Lines
Line* FileBase_Lines(char* fileName);

//Read file tags in Tags.txt
FileTags* ReadTags();

//Read sub-tags in Sub.txt
FileSubs* ReadSubs();

//Get file list in current folder
FileName* GetFileList();