/*Write a function to implement four function calculator. Function would take operands and
operator as arguments and returns result.
*/

#include<stdio.h>

int calculator(int, int,int );
int main()
{
	int n,a,b;
	printf("\n1. additon\n2. substraction\n3. multiplication\n4. division\n");
	scanf("%d",&n);
	printf("\nEntre the numbers==");
	scanf("%d %d",&a,&b);
	calculator(a,b,n);
	return 0;
}

int calculator(int a, int b, int n)
{
		
	switch(n)
	{
		case 1:
			printf("\n addition os 2 numbers is==%d",a+b);
			break;
		case 2:
			printf("\nSubstraction is==",a-b);
			break;
		case 3:
			printf("\nmultiplication is==",a*b);
			break;
		case 4:
			if(b!=0)
				printf("\n division is==%d",a/b);
			else
				printf("\n diviion with zero not possible");
			break;	
		default:
			printf("\nEntre valid choice");
			break;
	}
}
