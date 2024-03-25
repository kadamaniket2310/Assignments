/*
  Write a function to print given number of terms of Fibonacci series.
 */

#include<stdio.h>

int fibonacci(int);

int main()
{
	int a;
	printf("\n Entre the number==");
	scanf("%d",&a);
	fibonacci(a);

	return 0;
}

int fibonacci(int a)
{
	int b=0,c=1,n;
	n=b+c;
	for(int i=a;i>0;i--)
	{
		printf("%d\n",n);
		b = c;
		c = n;
		n = b+c;
	}
}
