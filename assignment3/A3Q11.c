/*
 Write a program to find factorial of given number.
*/

#include<stdio.h>
int main()
{
	int n,fact=1;
	printf("entre the number for factorial==");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	printf("factorial==%d\n",fact);

	return 0;
}
