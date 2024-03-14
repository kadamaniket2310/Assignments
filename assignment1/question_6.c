/*
  Write a program to accept an integer value and print its table.
*/

#include<stdio.h>
int main()
{
		int num,i,mul;
		printf("Entre the number for table==");
		scanf("%d",&num);
		for(i=1; i<=10; i++)
		{
			mul= num*i;
			printf("\n%d * %d = %d",num,i,mul);
		}
	return 0;	
}
