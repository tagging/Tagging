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
	char Lines[][MAX_FILELINE_LENGTH];
}Line;

//Get File Lines
Line* FileBase_Lines(char* fileName)
{
	Line* l = (Line*)malloc(sizeof(Line));
	FILE* f = fopen(fileName, "rt");
	char s[MAX_FILELINE_LENGTH];
	if (f == NULL) return 0;
	while (!feof(f))
	{
		if (fgets(s, MAX_FILELINE_LENGTH, f)) 
		{
			l->Count++;
		}
		else break;
	}
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