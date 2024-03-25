/*
 Write a function to calculate power.
 */

#include<stdio.h>

int power(int,int);

int main()
{
	int a,b;
	printf("\nEntre the number==");
	scanf("%d",&a);
	printf("\nEntre the number==");
	scanf("%d",&b);
	power(a,b);
	return 0;

}


int power(int a,int b)
{
	int ans,i=a;
	while(b>1)
	{
		a=a*i;
		b--;
	}
	printf("\n answer is == %d",a);
}
