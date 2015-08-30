#pragma once
//Get File Lines
Line* FileLines(char* fileName);
//Read file tags in Tags.txt
FileTags* ReadTags();
//Read sub-tags in Sub.txt
FileSubs* ReadSubs();
//Get file list in current folder
FileName* GetFileList();