#include <stdio.h>

//Define max tag length
#define MAX_TAG_LENGTH 128

//Define max tag input count in a line
#define MAX_LINE_TAG_COUNT 128

//Defin Taglist
char TagList[MAX_LINE_TAG_COUNT][MAX_TAG_LENGTH];

//Define Tag
char Tag[MAX_TAG_LENGTH];

//Define line tag count
int LineTagCount = 0;

//Process initial screen
void Initial_Screen() {
	//line string
	char tagLine[1024];
	//Print Welcome
	printf("Please input tags separated by space:\n");
	//Get input line
	scanf("%[^\n]", &tagLine);
	//Get tags from input line
	sscanf(tagLine, "%s", &Tag);
}

//Process tagging screen
void Tagging_Screen() {

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