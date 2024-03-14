/*
  Write a program to display ASCII values for character constants ‘\n’, ‘\r’, ‘\t’, ‘\a’, ‘\b’.
*/

#include<stdio.h>
int main()
{
	char ch1 = '\n',ch2='\r',ch3= '\t',ch4= '\a',ch5= '\b';
	printf("\nascii value  is %d",ch1);
	printf("\nascii value  is %d",ch2);
	printf("\nascii value  is %d",ch3);
	printf("\nascii value  is %d",ch4);
	printf("\nascii value  is %d\n",ch5);

	return 0;
}
