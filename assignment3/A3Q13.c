/*
 Write a program to display n terms of Fibonacci series
Input: 6
Output: 1, 1, 2, 3, 5, 8
*/

#include<stdio.h>
int main()
{
	int no1=0,no2=1,n,num;
	printf("Entre the number");
	scanf("%d",&num);
	n=no1+no2;
	for(int i=0;i<=num;i++)
	{
		printf("%d\n",n);
		no1 = no2;
		no2 = n;
		n=no1+no2;
	}
	return 0;
}
