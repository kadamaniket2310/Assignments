/*
 Write a program to display number of days in the given month and year using
a. Using If else ladder.
b. Using logical operators.
*/
//1 3 5 7 8 10 12, 4 6 9 11

#include<stdio.h>
int main()
{
	int m,y,d;
	printf("Entre the month==");
	scanf("%d",&m);
	printf("\nENtre the year==");
	scanf("%d",&y);

	if(m == 1||m==3||m==5||m==7||m==8||m==10||m == 12)
	{
		printf("given month has 31 days");
	}
	else if(m== 4||m==6||m==9||m ==11)
	{
		printf("\ngiven month has 30 days");
	}
	else
	{
		if((y%4==0 && y%100 != 0)||y%400==0)
		{
			printf("given month has 29 days");
		}
		else
		{
			printf("given month has 28 days");
		}
	}
	return 0;
}

