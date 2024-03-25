/*
 Write a function to calculate factorial of a given number.
 */

#include<stdio.h>

int factorial(int);
int main()
{
	int n,fact;
	printf("\nEntre the number to find factorial==");
	scanf("%d",&n);
	factorial(n);
	return 0;
}

int factorial(int n)
{
	int i=1,fact=1;

	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("\n factorial is=%d\n",fact);
	return 0;
}
