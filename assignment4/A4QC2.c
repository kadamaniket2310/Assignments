#include<stdio.h>
//int sp(int, int);
int main()
{
	int a,b;
	printf("Enter two Numbers: \n");
	scanf("%d%d",&a,&b);
	sp(&a,&b);
	printf("Swap: %d %d \n",a,b);
	return 0;
}

int sp(int* ptra, int* ptrb){
	int temp=*ptra;
	*ptra=*ptrb;
	*ptrb= temp;
}
