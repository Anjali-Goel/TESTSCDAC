#include<stdio.h>
void count(FILE*);
void removecomm(FILE*);
void rotmatch(FILE*);
void tabspace(FILE*);
main()
{
	int task;
	char fname[30];
	char ex;
	FILE* fp = NULL;
	printf("\n***TASK LIST***");
	printf("\n1 : Count the no. of alphabets, digits, spaces & special characters");
	printf("\n2 : Remove all the comments from the file(both single line and multi line");
	printf("\n3 : Find a matching word, rotate it and replace");
	printf("\n4 : Replace all the tab spaces with '\t' ");
	printf("\nChoose your task : ");
	scanf_s("%d", &task);
	fopen_s(&fp,"Source.txt", "a+"); //Opening the file in a+ mode
	switch (task)//choosing the task
	{
	case 1 : count(fp);
		     break;
	case 2 : removecomm(fp);
		     break;
	case 3 : rotmatch(fp);
		     break;
	case 4 : tabspace(fp);
		     break;
	default: printf("\n!!!INVALID TASK CHOSEN!!!");
	}
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &ex);
	getchar();
}