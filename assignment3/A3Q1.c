/*
 Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
******
*/

#include<stdio.h>

int main()
{
	int n,i;
	char ch;
	printf("\n Entre the number=");
	scanf("%d",&n);
	printf("\n Entre the character=");
	scanf("%*c%c",&ch);
	while(i<n)
	{
		printf("%c",ch);
		i++;
	}
}
