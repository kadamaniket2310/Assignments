/*
 Write a program to find maximum of two numbers using
a. If – else
b. conditional operator.
*/

#include<stdio.h>
int main()
{
	int no1,no2;
	printf("Entre the both the numbers No1 and No2==\n");
	scanf("%d %d",&no1,&no2);

	/*if(no1>no2)
	{
		printf("No1 is greater\n");
	}
	else
	{
		printf("No2 is greater\n");
	}*/
	(no1 > no2)?printf("No1 is greater\n"):printf("No2 is greater\n");	
}	
