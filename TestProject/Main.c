#include <stdio.h>

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
	FILE* f = fopen("Test.txt", "rt");
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