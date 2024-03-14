/*
 Input a number and display whether number is Even or Odd.
*/

#include<stdio.h>
int main()
{
	int no;
	printf("Entre the number==");
	scanf("%d",&no);
	

	if( no%2 == 0)
	{
		printf("\n number %d  is even\n",no);
	}
	else
	{
		printf("number %d  is odd\n",no);
	}	
}	
