/*
 Write a program to accept a 5 digit number and check whether it is a numeric palindrome.
rem = num % 10;
rev = rev * 10 + rem ;
num = num / 10;
*/

#include<stdio.h>

int main()
{
	int num,rev=0,sum,rem=0,temp;
	printf("Entre the number==\n");
	scanf("%d",&num);
	temp = num;
	while( num !=0)	
	{
	rem = num % 10;
	rev = rev * 10 + rem;
	num = num / 10;
	}
	if(temp==rev)
	{
		printf("number is palindrome\n");
	}	
	else
	{
		printf("number is not palindrome\n");
	}	
}
