/*
 Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120
*/

#include<stdio.h>
int main()
{
	int n,i=1,fact=1;
	printf("Entre the number to find the factorial==");
	scanf("%d",&n);

	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("\n factorial is=%d\n",fact);
	return 0;
}
