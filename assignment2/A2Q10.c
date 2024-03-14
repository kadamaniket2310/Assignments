/*
 Write a program to accept a character c and display category of the input character.
ALPHABET   : c is a letter (65 to 90 or 97 to 122)
UPPERCASE  : c is an uppercase letter (65 to 90)
LOWERCASE  : c is a lowercase letter (97 to 122)
DIGIT      : c is a digit (48 to 57)
SPACE      : c is a space(32), tab(9), carriage return(13), new line(10)
OTHER      : Not listed above
*/

#include<stdio.h>
int main()
{
	char ch;
	printf("Entre the character==");
	scanf("%c",&ch);

	if(ch>='A' && ch<='Z')
	{
		printf("Uppercase Alphabet\n");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("Lowercase Alphabet\n");
	}
	else if(ch>= 48 && ch<=57)
	{
		printf("It is a digit\n");
	}	
	else if(ch==32 || ch==9 || ch==13 || ch==10)
	{
		printf("Character is a space\n");
	}
	else
	{
		printf("not listed above\n");
	}	
	return 0;
}	

