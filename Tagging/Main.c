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
