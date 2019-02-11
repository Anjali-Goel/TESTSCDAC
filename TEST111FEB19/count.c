#include<stdio.h>
void count(FILE* fp)
{
	int alph = 0, dig = 0, spaces = 0, spech = 0;
	char inp;
	while (!feof(fp))
	{
		inp = fgetc(fp);
		if (inp >= 48 && inp <= 57)//CHecking if the character is a number
			dig += 1;
		else if (inp == 32)//CHECKING FOR SPACES
			spaces += 1;
		else if ((inp >= 65 && inp <= 90) || (inp >= 97 && inp <= 122))
			alph += 1;//CHECKING FOR ALPHABET
		else if ((inp >= 33 && inp <= 47) || (inp >= 58 && inp <= 64) || (inp >= 91 && inp <= 96) || (inp >= 123 && inp <= 127))
			spech += 1;//CHECKING FOR SPECIAL CHARACTER
		else
			;//ELSE DOING NOTHING HENCE NO EXPRESSION
	}
	printf("\nALPHABETS = %d\nDIGITS = %d\nSPACES = %d\nSPECIAL CHARACTERS = %d", alph, dig, spaces, spech);
	fclose(fp);
}