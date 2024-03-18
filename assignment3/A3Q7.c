/*
 Write a program to accept a number and print unique pairs of numbers such that multiplication of
the pair is given number
Input: 24
Output:
1 * 24 = 24
2 * 12 = 24
3 * 8 = 24
4 * 6 = 24
*/

#include<stdio.h>
int main()
{
	int num,x,i=1;
	printf("Entre the number==\n");
	scanf("%d",&num);
	while(i<num)
	{
		if(num%i==0 && x>i)
		{
			x=num/i;
			printf("%d * %d = %d\n",i,x,num);
		}
		i++;
	}
}
