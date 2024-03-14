/*
  Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
  triangle. Use sqrt() function from math.h to calculate square root.
 */

#include<stdio.h>
#include<math.h>

int main()
{
	int b,h,l,peri;
	float area;
	printf("Entre the base,height and length of the triangle==");
	scanf("%d %d &d",&b,&h,&l);
	area=(0.5)*b*h;
	printf("\nArea of triangle= %.2f",area);
	peri= l+b+h;
	printf("\nperimetre of triangle= %d",peri);
	//s1= sqrt(area);
	//s2= sqrt(peri);
	printf("\n squareroot of area= %.2f",sqrt(area));
	printf("\n squareroot of perimetre= %.2f\n",sqrt(peri));
	return 0;

}
