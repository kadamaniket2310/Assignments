/*
 Write a program to accept a number and check whether it is Prime no.
 */

#include<stdio.h>
int main()
{
	int n,flag;
	printf("Entre the number==");
	scanf("%d",&n);

	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag =1;
			break;
		}
	}
}
