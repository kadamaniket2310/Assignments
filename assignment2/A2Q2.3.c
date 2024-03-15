/*
 Write a program to accept Employee Id , Department No, Designation from user and display  output 
Then output should be:
Employee with employee id 101 is working in "Sales" department as "Manager".
*/


#include<stdio.h>

int main()
{
	int empid,deptno;
	char ch;
	printf("entre the empid :");
	scanf("%d",&empid);
	printf("\nEntre the department no:");
	scanf("%d",&deptno);

	printf("\nEntre the designaton:");
	scanf("%*c%c",&ch);
	printf("\nEmployee with employee id %d is working in",empid);
	switch(deptno)
	{
		case 10:
			printf(" Marketing as");
			break;
		
		case 20:
			printf(" Management as");
			break;

		case 30:
			printf(" sales as");
			break;

		case 40:
			printf(" designing as");
			break;	
	}
	switch(ch)
	{
		case 'M':
			printf(" Manager\n");
			break;
		
		case 'S':
			printf(" Supervisor\n");
			break;

		case 's':
			printf(" Security Officer\n");
			break;

		case 'C':
		        printf(" Clerk\n");
			break;	
	}
	return 0;
}
