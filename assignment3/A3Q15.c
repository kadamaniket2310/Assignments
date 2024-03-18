/*Modify the menu driven program for four function calculator. Add a menu item to choose
option exit. The program continues till user chooses option exit.
*/

#include<stdio.h>


int main()
{
	int a,b,ans,n;
	printf("\nEntre the choice:\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.EXIT\n");
	scanf("%d",&n);

	switch(n)
	{
		case 1:
			printf("\nEntre the numbers==");
			scanf("%d %d",&a,&b);
			ans = a+b;
			printf("\nAddition is == %d\n",ans);
			break;
		case 2:
			printf("\nEntre the numbers==");
                        scanf("%d %d",&a,&b);
			ans = a-b;
			printf("\nsubtraction is == %d\n",ans);
			break;	
		case 3:
			printf("\nEntre the numbers==");
                        scanf("%d %d",&a,&b);
                        ans = a*b;
                        printf("\nMultiplication is == %d\n",ans);
                        break;	
		case 4:
			printf("\nEntre the numbers== ");
                        scanf("%d %d",&a,&b);
			if(b == 0)
			{
				printf("\ncannot divisible by zero\n");
			}
			else
			{
                        	ans = a/b;
                        	printf("\nDivision is == %d\n",ans);
			}
                        break;
			
		default:
			printf("\nEntre the correct choice\n");
	}
	return 0;

}



