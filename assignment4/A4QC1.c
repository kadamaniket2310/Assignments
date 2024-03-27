#include<stdio.h>
int sp(int, int);
int sres, pres;
int main()
{
	int a,b;
	printf("Enter two Numbers: \n");
	scanf("%d%d",&a,&b);
	sp(a,b);
	printf("Sum=%d \nProduct=%d\n",sres,pres);
	return 0;
}

int sp(int a, int b){
	sres=a+b;
	pres=a*b;
}
