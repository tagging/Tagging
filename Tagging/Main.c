#include "Main.h"

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
	TagBase_SetDefaultTag(filetags, filenames);
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
