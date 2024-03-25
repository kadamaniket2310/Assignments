/*Write a function to print a given character for a given number of times.
 */

#include<stdio.h>

int rep(char,int);
int main()
{
	int i;
	char c;
	printf("Entre the character==");
	scanf("%c",&c);
	printf("\nEntre the number==");
	scanf("%d",&i);
	rep(c,i);

	return 0;
}

rep(char c, int i)
{
	while(i>0)
	{
		printf("%c\t",c);
		i--;
	}
}
