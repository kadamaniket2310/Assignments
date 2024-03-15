/*
 Write a program to display day of week from given date (day, month and year).
 */

#include<stdio.h>

int main()
{
	int d,m,y,dow;

	printf("Entre the DD/MM/YY:");
	scanf("%d %d %d",&d,&m,&y);

	if (m < 3) {
        m += 12;
        y--;
    }


    dow = (d + (13 * (m + 1) / 5) + (y % 100) + ((y % 100) / 4) + ((y / 100) / 4) + 5 * (y / 100)) % 7;

    switch(dow)
    {
	    case 0:
		    printf("day is sunday");
		    break;


	    case 2:
		    printf("day is monday");
		    break;


	    case 3:
		    printf("day is tuesday");
		    break;


	    case 4:
		    printf("day is wednesday");
		    break;

	    case 5:
		    printf("day is thursday");
		    break;
		  

	    case 6:
		    printf("day is friday");
		    break;


	    case 7:
		    printf("day is saturday");
		    break;

    }
}
