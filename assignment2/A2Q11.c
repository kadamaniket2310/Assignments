/*
 Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in
which the point lies. Also check for special cases point lies on -+ x-axis,-+ y-axis and origin
*/

#include<stdio.h>
int main()
{
	int i,j;
	printf("Entre the co-ordinates==\n");
	scanf("%d %d",&i,&j);

	if(i>0 && j>0)
	{
		printf("co-ordinates are in first quadrants x-axis and y-axis both are '+ve'\n");

	}
	else if(i<0 && j<0)
	{
		printf("co-ordinates are in 3rd quadrants x-axis and y-axis both are '-ve'\n");
	}
	else if(i>0 && j<0)
	{
		printf("co-ordinates are in 4th quadrants x-axis is '+ve' and y-axis is '-ve'\n");
	}
	else if(i<0 && j>0)
	{
		printf("co-rdinates are in 2nd quadrants x-axis is '-ve' and y-axis is '+ve'\n");
	}
	else if(i==0 && j==0)
	{
		printf("co-ordinates are at origin\n");
	}	
	else if(i==0 && j>0)
	{
		printf("co-rdinates are  on +ve y-axis\n");
	}	
	else if(i==0 && j<0)
	{
		printf("co-rdinates are  on -ve y-axis\n");
	}
	else if(i>0 && j==0)
	{
		printf("co-rdinates are  on +ve x-axis\n");
	}	
	else if(i<0 && j==0)
	{
		printf("co-rdinates are  on +ve y-axis\n");
	}
	else
	{
		printf("Entre valis co-ordinates\n");
	}	
}		

