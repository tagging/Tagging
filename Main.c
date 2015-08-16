#include <stdio.h>
#include <string.h>

//Define max tag length
#define MAX_TAG_LENGTH 128

//Define max tag input count in a line
#define MAX_LINE_TAG_COUNT 128

//Define max input line length
#define MAX_LINE_LENGTH 1024

//Defin Taglist
char TagList[MAX_LINE_TAG_COUNT][MAX_TAG_LENGTH];

//Define Tag
char Tag[MAX_TAG_LENGTH];

//Define line tag count
int LineTagCount = 0;

//Scan files for tags
void FileScan()
{

}

//Split string by space
void strsplit(char* scr, char*** dest, int* count )
{
	//saveptr required parameter for strtok_s
	char *saveptr, *token;
	//Init count
	*count = 0;
	//Get first tag from input line
	token = strtok_s(scr, " ", &saveptr);
	while (token != NULL) {
		//Get tag from input line and set counter
		strcpy_s((*dest)[*count++], MAX_TAG_LENGTH, token);
		//Get Next tag from input line
		token = strtok_s(NULL, " ", &saveptr);
	}
}

//Process initial screen
void Initial_Screen() {
	//line string
	char TagLine[MAX_LINE_LENGTH];
	//Print Welcome
	printf("Please input tags separated by space:\n");
	//Get input line
	scanf_s("%[^\n]", &TagLine, MAX_LINE_LENGTH);
	//Read \n
	getchar();
	//Split input line into tags
	strsplit(TagLine, &TagList, &LineTagCount);
}

//Process tagging screen
void Tagging_Screen() {
	for (int i = 0; i < LineTagCount; i++)
	{
		printf("%s\n", TagList[i]);
	}
}

int main()
{
	//Scan files for tags
	FileScan();
	//Tagging
	while (1)
	{
		//Process initial screen
		Initial_Screen();
		//Process tagging screen
		Tagging_Screen();
	}
	return 0;
}