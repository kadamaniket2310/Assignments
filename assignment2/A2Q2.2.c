/*
 Write a program to crate four function calculator. Four functions are +, - , *, /

*/

#include<stdio.h>

int main()
{
	int a,b,n;

	printf("Entre the number for calculation==");
	scanf("%d %d",&a,&b);
	printf("\nSelect the operarion to do on calculator:\n1.addition\n2.substraction\n3.multiplication\n4.dividion\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("\naddition==%d",a+b);
			break;

		
		case 2:
			printf("\nsubtraction==%d",a-b);
			break;
		

		case 3:
			printf("\nmultiplication==%d",a*b);
			break;


		case 4:
			printf("\ndivision==%d",a/b);
			break;

		default:
		printf("Entre the valid choice\n");	
	}
	return 0;
}

