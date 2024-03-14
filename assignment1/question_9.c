/*
 Write a program to convert temperature in Celsius to Fahrenheit and vice versa. Formula for
conversion is

°F = (°C × 9/5) + 32
cel= (f -32)*(5/9)
*/

#include<stdio.h>

int main()
{
	int t;
	float cel,fer;
	printf("entre the temperature==");
	scanf("%f",&cel);
	fer= (cel * 9/5.0f)+32;
	printf("\n celcious to ferinhite is %.2f",fer);
	cel= (fer - 32)*(5/9.0f);
	printf("\n ferinhite to celcious is %.2f\n",cel);
	return 0;
}
