#include<stdio.h>
#include<string.h>
void removecomm(FILE* fp)
{
	long int i, p, j;
	char ch;
	while (!feof(fp))
	{
		ch = fget(fp);
		if ( ch == 47 )//checks for the starting of the comment line
		{
			ch = fgetc(fp);
			if (ch == 47 || ch == 34)//check for start of single line or double line comment
			{
				i = ftell(fp);//TO NOTE THE POSTION OF fP,points to character after // or /* 
				ch = fgetc(fp);
				if (ch == '\n')//for a single line comment
				{
					p = ftell(fp);//points to next line comment
					fseek(fp, i - 3, 0);//positioning to first slash of single line comment
					for (j = i - 2; j < p; ++j)
					{
						fprintf(fp,"%c",'\0'); //replacing the characters of single line comment with null character
					}
				}
				else if (ch == '*')//for double line comment
				{
					p = ftell(fp);//points to / at the end of the comment
					fseek(fp, i - 3, 0);//positions to starting / of the comment 
					for (j = i - 2; j <= p ; ++j)
					{
						fprintf(fp,"%c",'\0');//replacing the characters of double line comment with null character
					}
				}
			}
		}
	}
	fclose(fp);
}