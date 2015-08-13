# Tagging

## What is Tagging?

Tagging is a classification, organization and management tool for tagged files.

## Rules for tags

1 Tag can be used for file searching.

2 File can have multiple tags.

3 Tag can have multiple sub-tags.

4 Filename is a default tag for file.

5 Parent folders' names are default tags for file.

## Branches

### [Master]Rapid Prototype 800 2015-08-10

1 Console application written by C language;

2 Read file tags in Tags.txt;

3 Read sub-tags in Sub.txt;

4 Get file list in current folder;

5 Set filename as default tag;

6 Output file list or sub-tag list for the input tag.

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

Input > 

tag1

Output >

Filename1.txt

Filename2.docx

…

[Sub-tags]

0 Show all

1 Sub-tag1

## License

Tagging is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see http://opensource.org/licenses/MIT.
