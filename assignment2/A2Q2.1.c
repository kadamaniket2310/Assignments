/*
 Write a program to display number of days in the given month and year using switch case
statement.
*/

#include<stdio.h>
int main()
{
	int m,y,d;
	printf("\nEntre the year ==");
	scanf("%d",&y);
	printf("\n1.jan\n2.feb\n3.mar\n4.april\n5.may\n6.june\n7.july\n8.aug\n9.sept\n10.oct\n11.nov\n12.dec");
	scanf("%d",&m);
	switch(m)
	{
		case 1:			
			printf("\n given month has 31 days");
			break;
		case 2:
			if((y%4==0 && y%100!=0) || y%400==0)	
				printf("\ngiven month has 29 days");
			else
				printf("\ngiven month has 28 days");
			break;
		case 3:
			printf("\n given month has 31 days");
			break;

		case 4:
			printf("\n given month has 30 days");
			break;
	
		case 5:
			printf("\n given month has 31 days");
			break;
			
		case 6:
			printf("\n given month has 30 days");
			break;

			
		case 7:
			printf("\n given month has 31 days");
			break;
		

		case 8:
			printf("\n given month has 31 days");
			break;


		case 9:
			printf("\n given month has 30 days");
			break;


		case 10:
			printf("\n given month has 31 days");
			break;


		case 11:
			printf("\n given month has 30 days");
			break;


		case 12:
			printf("\n given month has 31 days");
			break;
	}
	return 0;	
}

