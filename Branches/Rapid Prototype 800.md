# [Master]Rapid Prototype 800 2015-08-10

1 Console application written by C language;

2 Read file tags in Tags.txt;

3 Read sub-tags in Sub.txt;

4 Get file list in current folder;

5 Set filename as default tag;

6 Output file list, parent tags and sub-tag list for the input tags;

7 Enter a number to select parent tag or sub-tag from the above list;

8 Press 0 to return to the initial screen.

## Tags.txt

Tags.txt contains all tags for files in this folder.

Filenames and tags are delimited by a vertical bar.

### Data format

> Filename1.txt | tag1  | tag2  | tag3  | tag4  …

> Filename2.docx | tag5  | tag6  …

> Filename3.xlsx | tag7  | tag8  | tag9  …

> …

## Sub.txt

FILE Sub.txt contains all sub-tags for file tags in this folder.

Tags and sub-tags are delimited by a vertical bar.

### Data format

> tag1 | sub-tag1  | sub-tag2  | sub-tag3  | sub-tag4  …

> tag2 | sub-tag5  | sub-tag6  …

> tag3 | sub-tag7  | sub-tag8  | sub-tag9  …

> …

## Input & Output
Output:

> Please input tags separated by space:

Input:

> tag1

Output:

> [tag1]

> Filename1.txt

> Filename2.docx

> …

> 0 Return to initial screen

> [Parent tags]

> 1 Parent tag1

> 2 Parent tag2

> …

> [Sub-tags]

> 3 [Show all]

> 4 Sub-tag1

> 5 Sub-tag2

> 6 Sub-tag3

> …

Input:

> 4

Output:

> [Sub-tag1]

> Filename3.docx

> Filename4.xlsx

> 0 Return to initial screen

> [Parent tags]

> 1 tag1

> …

Input:

> 0

Output:

> Please input tags separated by space:
