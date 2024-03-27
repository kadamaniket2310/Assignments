#include<stdio.h>


int main(){
	int marks[4],total;
	float avg;
	printf("Enter Marks: \n");
	for(int i=0;i<=4;i++){
		scanf("%d",&marks[i]);
	}
	for(int i=0;i<=4;i++){
		total+=marks[i];
	}
	printf("Total = %d\n",total);
	avg=total/5;
	printf("Average=%.2f\n",avg);

	return 0;
}
