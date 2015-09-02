#include <stdio.h>
#include <stdlib.h>

//Define max input line length
#define MAX_FILELINE_LENGTH 1024

//Line
typedef struct line
{
	//Line Count
	int Count;
	//Lines
	char** Lines;
}Line;

//Get File Lines
Line* FileBase_Lines(char* fileName)
{
	Line* l = (Line*)calloc(1, sizeof(Line));
	FILE* f = fopen(fileName, "rt");
	if (f == NULL) return 0;
	while (!feof(f))
	{
		if (l->Count == 0)
			l->Lines = (char**)calloc(1, sizeof(char*));
		else
			l->Lines = (char**)realloc(l->Lines, (l->Count + 1) * sizeof(char*));
		l->Lines[l->Count] = (char*)malloc(sizeof(char) * MAX_FILELINE_LENGTH);
		if (fgets(l->Lines[l->Count - 1], MAX_FILELINE_LENGTH, f))
			l->Count++;
		else
			break;
	}
	return l;
}

//File Read Test
int main()
{
	//Read lines in file Tags.txt
	Line* lines = FileLines("Tags.txt");
	printf("Count = %i\n", lines->Count);
	for (int i = 0; i < lines->Count; i++)
	{
		printf("%s\n", lines->Lines[i]);
	}
	return 0;
}