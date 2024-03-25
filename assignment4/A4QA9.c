/*
 Write a function to indicate whether given number is prime or not. Write another function to
print prime numbers in the given range.
 */

#include<stdio.h>

int prime(int);
int prime1(int,int);

int main()
{
	int a,i,j;
	printf("\nEntre the number==");
	scanf("%d",&a);
	prime(a);
	printf("\nentre the number==");
	scanf("%d %d",&i,&j);
	prime1(i,j);
	return 0;
}

int prime(int a)
{
	int flag;
	if(a == 0 || a == 1)
	{
		printf("\nnor prime nor composite");
		flag = 1;
	}
	for(int j=2; j<=a/2 ; j++)
	{
		if(a%j==0)
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}
	}
	if(flag == 0)
	{
		printf("\nprime number");
	}
	else
	{
		printf("\nnot prime number");
	}
}
/*
int main()
{
	int i,j;
	printf("\nentre the number==");
	scanf("%d %d",&i,&j);
	prime(i,j);
	return 0;
}
*/
int prime1(int i,int j)
{
	int flag;
	for(int k=i;k<=j;k++)
	{
		if(i==0||i==1)
		{
			flag = 1;
		}
		if( i==2||i==3||i==5)
		{
			printf("\n%d",i);
		}
		for(int l=2;l<i/2;l++)
		{
			if(i%l == 0)
			{
				flag = 1;
				break;
			}
			else
			{
				flag = 0;
			}
			
		}
		if(flag == 0)
		{
			printf("\n%d",i);
		}
		i++;
	}
}
