#include <stdio.h>

//Defin Taglist Type
typedef char* TagList;

//Process initial screen
TagList* Initial_Screen() {
	//line string
	char tags[1024];
	//Print Welcome
	printf("Please input tags separated by space:\n");
	//Get tags
	gets(tags);
}

//Process tagging screen
void Tagging_Screen(TagList* taglist) {

}

int main()
{
	//Tagging
	while (1)
	{
		//Process initial screen
		TagList* taglist = Initial_Screen();
		//Process tagging screen
		Tagging_Screen(taglist);
	}
	return 0;
}