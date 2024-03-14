/*
 Print the ASCII value of user entered character in decimal, hex, octal format and also print the
character for user entered ASCII value.
*/

#include<stdio.h>

int main()
{
	char ch;
	printf("Entre the character letter==");
	scanf("%c",&ch);
	printf("\n ascii value of %c is %d",ch,ch);
	printf("\n decimal value of %c is %d",ch,ch);
	printf("\n hexa value of %c is %x",ch,ch);	
	printf("\n octal value of %c is %o \n",ch,ch);
	return 0;
}
