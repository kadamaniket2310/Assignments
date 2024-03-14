/*
 Write a program to accept number and check whether the number is +ve, -ve and zero
 */

#include<stdio.h>
int main()
{
	int no;
	printf("\nEntre the number==");
	scanf("%d",&no);

	if( no>0)
	{
		printf("\nnumber %d is positive number\n",no);
	}
	else if(no<0)
	{
		printf("\nnumber %d is negative number\n",no);
	}
	else
	{
		printf("\nnumber is zero\n");
	}	
}	
