/*
 Write function to check whether given year is leap or not. Write another function to print
number of days in given month.
*/
#include<stdio.h>

int leapyear(int);
int days(int,int);

int main()
{
	int y,m;
	printf("Entre the year==");
	scanf("%d",&y);
	leapyear(y);
	printf("\nEntre the month==");
	printf("\n1. jan\n2. Feb\n3. mar\n4.Apr\n5.may\n6.june \n7. july\n8.Aug\n9. sept\n10. oct\n11. Nov\n12. Dec\n");
	scanf("%d",&m);
	printf("Entre the year==");
	scanf("%d",&y);
 	days(m,y);	
	return 0;
}

int leapyear(int y)
{
	int year;
	if((y%4==0 && y%100!=0)||y%400==0){
		printf("Leap Year\n");
	}
	else
	{
		printf("Not Leap Year\n");
	}
}

int days(int m, int y)
{
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		printf("\nNo of days are 31 in the month");
	}
	else if(m==4||m==6||m==9||m==11)
	{
		printf("\nNo of days are 30 int thr month");
	}
	else if(m==2)
	{
		if(y%4==0 && y%100!=0||y%400==0)
		{
			printf("\nNo of days are 29 in month");
		}
		else
		{
			printf("\nNo of days are 28 in month");
		}
	}
}
