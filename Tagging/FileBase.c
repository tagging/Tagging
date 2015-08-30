#include "FileBase.h"
#include "TagBase.h"
#include <stdlib.h>

//Get File Lines
Line* FileBase_Lines(char* fileName)
{

}

//Read file tags in Tags.txt
FileTags* FileBase_ReadTags()
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