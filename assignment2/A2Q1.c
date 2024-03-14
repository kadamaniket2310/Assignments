/*
 Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message.
*/

#include<stdio.h>
int main()
{
	int a,b;
	float div;
	printf("Entrte the two numbers");
	scanf("%d %d",&a,&b);
	div= a/b;
	if(b != 0)
	{
		printf("\n division of 2 numbers is== %.2f\n",div);
	}	
	else{
		printf("\n divider is zero please entre the divider as non zero numbern\n");
	}
	return 0;	
}

