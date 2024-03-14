/*
 Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator
*/

#include<stdio.h>
int main()
{
	int year;
	printf("Entre the year\n");
	scanf("%d",&year);
	/*//A.
	 if(year%100==0)
	{
		if(year%400==0)
		{
		printf("this is leaf year with 366 days\n");
		}
		else
		{
			printf("this is not a leaf year\n");
		}
	}
	else if(year%4==0)
	{
		printf("this year is a leaf with 366\n");
	}	
	else
	{
		printf("this is not a leaf year\n");
	}	
	*/	
	//B.
	if(year%4==0 && year%100!=0)
	{
		printf("this is leaf year with 366 days\n");
	}
	else if(year%400==0)
	{
		printf("this is leaf year with 366 days\n");
        }
	else
	{
		printf("this is not a leaf year\n");
	}	
	/*
	//C.
	(year%4==0 && year%100!=0)?printf("this is leaf year with 366 days\n"):(year%400==0)?printf("this is leaf year\n"):
		printf("this is not a leaf year\n");
	*/	
		return 0;
	
}
//(no1 > no2)?printf("No1 is greater\n"):printf("No2 is greater\n");
