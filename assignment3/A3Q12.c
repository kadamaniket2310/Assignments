/*
 Write a program to accept integer values of base and index and calculate power of base to
index.
Input:
base: 2
Output: 32
Input:
base: 8
Output: 512
*/

#include<stdio.h>
int main()
{
	int b,i,ans;
	printf("Entre the base and indices==");
	scanf("%d %d",&b,&i);
	ans = b;
	for(int j=1;j<i;j++)
	{
		ans = ans*b;
	}
	printf("\nanswer == %d",ans);
}
