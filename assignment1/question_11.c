/*
 Write a program to determine the ranges of char, short, int, and long variables, both signed and
unsigned, by printing appropriate values from standard headers.
Do not use spaces to align table columns.
(note: the size and range changes from compiler to compiler)
*/
#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
	printf("\n==========================================================================");
	printf("\nDATA_TYPE\t\tSIZE\t\tFS\tRANGE\n");
	printf("\n==========================================================================");
	printf("\nchar\t\t\t%d\t\t%%c\t%dto%d\n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
	printf("\nunsigned char\t\t%d\t\t%%c\t%dto%d\n",sizeof(unsigned char),0,UCHAR_MAX);
	printf("\nshort int \t\t%d\t\t%%d\t%dto%d\n",sizeof(short int),SHRT_MIN,SHRT_MAX);
	printf("\nunsigned short int\t%d\t\t%d%huto%hu\n",sizeof(unsigned short int),0,USHRT_MAX);
	printf("\nint\t\t\t%d\t\t%%d\t%dto%d\n",sizeof(int),INT_MIN,INT_MAX);
	printf("\nunsigned int\t\t%d\t\t%%u\t%uto %u\n",sizeof(unsigned int),0,UINT_MAX);
	printf("\nlonf int\t\t%d\t\t%%ld\t%ldto%ld\n",sizeof(long int),LONG_MIN,LONG_MAX);
	printf("\nunsigned long int\t%d\t\t%%lu\t%luto%lu\n",sizeof(unsigned long int),0,ULONG_MAX);
	return 0;
}






































