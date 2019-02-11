#include<stdio.h>
void tabspace(FILE* fp)
{
	char inp;
	while (!feof(fp))
	{
		inp = fgetc(fp);
		if (inp == "	")
		{
			fputc("\t",fp);
		}
	}
}