#include<stdio.h>
#include<string.h>
void removecomm(FILE* fp)
{
	char out[3];
	while (!feof(fp))
	{
		fgets(out, 2, fp);//scanf two characters at a time from the file
		if (out == "//" || out == "/*")//checks for the starting of the comment line
		{
			while (out != "\n" || out != "*/")//till the end of the comment line is reached
				fputc("\0",fp);               //replaces the characters with null character
		}
	}
}