/*
 Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results.
*/

#include<stdio.h>

int main()
{
	int a,b,sum,diff,prod;
	printf("\n Entre the two numbers== ");
	scanf("%d %d",&a,&b);
	sum= a+b;
	diff= a-b;
	prod= a*b;
	printf("\n sum of 2 numbers= %d",sum);
	printf("\n difference of 2 numbers= %d",diff);
	printf("\n product of 2 numbers= %d\n",prod);
	return 0;
}
