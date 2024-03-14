/*
Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50.
*/

#include<stdio.h>
int main()
{
	int quantity;
	float rs;
	printf("price of 1 quantity is Rs 5 \nNOTE: 5 percent discount on quantity purchase above 30 and 20 percent on quntity purchase above 50");
	printf("\nEntre the quantity to purchase==");
	scanf("%d",&quantity);
	if(quantity < 30)
	{
		printf("\ntotal price of %d quantity==%d\n",quantity,quantity*5);
	}
	else if(quantity > 30 && quantity < 50)
	{
		rs=(5*9.0)/10.0;
		printf("\ntotal price of %d quantity==%.3f\n",quantity,quantity*rs);
	}
	else 
	{
		rs=(5*8.0)/10.0;
		printf("\ntotal pruce of %d quantity==%3f ",quantity,quantity*rs);
	}	
}	
