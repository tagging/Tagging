#pragma once

#include "FileBase.h"

//Define max tag name length
#define MAX_TAG_LENGTH 128

//Define max tag input count in a line
#define MAX_TAG_COUNT 128

//Defin Taglist
char TagList[MAX_TAG_COUNT][MAX_TAG_LENGTH];

//Define Tag
char Tag[MAX_TAG_LENGTH];

//Tags
typedef char TagName[MAX_TAG_LENGTH];

//Set filename as default tag
void TagBase_SetDefaultTag(FileTags* filetags, FileName* filenames);