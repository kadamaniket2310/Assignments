/*
 * Write a program to accept two numbers and find its GCD (greatest common divisor) using
Euclidean algorithm. The following example explains the algorithm. GCD of 123 and 36 is 3
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
6 % 3 = 0
GCD = 3
Input:
no1: 123
no2:36
Output:
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
GCD of 123 and 36 is 3
*/


#include<stdio.h>

int main()
{
	int a,b,c=1;
	printf("Entre the number==");
	scanf("%d %d",&a,&b);
	while(c>0)
	{
		c = a%b;
		 if(c == 0)
		 {
			 printf("GCD is  %d\n",b);
			 continue;
		 }
		 printf("%d  %d  = %d\n",a,b,c);
		 a=b;
		 b=c;
	}
	return 0;
}

