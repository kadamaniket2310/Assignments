/*
  Write a program to accept three integer numbers and find its average.
*/

#include<stdio.h>
int main()
{
	int a,b,c,avg,sum;
	printf("\n Entre the number to find average");
	scanf("%d %d %d",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("\nAverage of numbers is == %d\n",avg);
	return 0;
}	
