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

void Split_Tags(char* TagLine)
{
	//saveptr required parameter for strtok_s
	char *saveptr, *token;
	//Get first tag from input line
	token = strtok_s(TagLine, " ", &saveptr);
	while (token != NULL) {
		//Get tag from input line and set counter
		strcpy_s(TagList[LineTagCount++], MAX_TAG_LENGTH, token);
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
	//Init tag count
	LineTagCount = 0;
	//Split input line into tags
	Split_Tags(TagLine);
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