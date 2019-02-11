#include<stdio.h>
#include<string.h>
void rotmatch(FILE* fp)
{
	int i;
	char temp;
	char s[20],o[20];
	printf("\nENTER THE WORD : ");//taking the match word from user
	scanf_s("%s", s);
	while (!feof(fp))
	{
		fgets(o, strlen(s)-1, fp);//scanning from the file,strings of length same as input word
		if (!strcmp(o, s)) //when the strings are equal
		{
			temp = o[0];
			for (i = 0; o[i] != "\0"; ++i) //rotating the string towards left by one position
			{ 
				o[i] = o[i+1];
			}
			o[strlen(s) - 2] = temp;
			o[strlen(s) - 1] = "\0";
			fputs(o, fp);//printing the rotated string in place of matched word
		}

	}
}