/*
 Write a program to accept a number and print the number in character, decimal, octal and hex
formats.
*/

#include<stdio.h>
int main()
{
	int no;
	printf("\n Entre the number== ");
	scanf("%d",&no);
	printf("\n character of %d is  %c",no,no);
	printf("\n decimal value of %d is %d",no,no);
	printf("\n octal value of %d is %o",no,no);
	printf("\n hexa value of %d is %x \n",no,no);
	return 0;
}
