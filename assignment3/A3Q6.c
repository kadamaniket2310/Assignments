/*
 Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12
*/

#include<stdio.h>
int main()
{
	int n,i=1,fact;
	printf("Entre the number==\n");
	scanf("%d",&n);

	while(i<n)
	{	
		if(n%i==0)
		{
			printf("\n factors=%d\n",i);
		}
		i++;
	}
	return 0;
}
