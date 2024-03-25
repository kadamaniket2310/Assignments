/*
  Write a function to return next term of Fibonacci series with each call to the function.
 */

#include<stdio.h>

int fibonacci(int);

int main()
{
	int n,c;
	printf("\nEntre the number==");
	scanf("%d",&n);
	fibonacci(c);
	return 0;
}

int fibonacci(int n)
{
	int a=0,b=1,c,d;
	c = a+b;
	here:
	printf("\nentre any number to continue");
	scanf("%d",&d);
	printf("\nnext number==%d",c);
	a = b;
	b = c;
	c = a+b;
	goto here;
}


