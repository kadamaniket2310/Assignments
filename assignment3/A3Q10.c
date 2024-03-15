/*
 Write a program to print table of given number.
 */

#include<stdio.h>
int main()
{
	int n,i,ans;
	printf("Entre the number for table==");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		ans = n*i;
		printf("%d * %d = %d\n",n,i,ans);
	}
	return 0;
}

