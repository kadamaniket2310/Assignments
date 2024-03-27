#include<stdio.h>
void acpt_ary(int arr[],int len);
void prnt_ary(int arr[],int len);

int main(){
	int arr[5];
	acpt_ary(arr,5);
	prnt_ary(arr,5);
	return 0;
}

void acpt_ary(int arr[],int len){
	printf("Enter %d Array Elements: \n",len);
	for(int i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
}
void prnt_ary(int arr[],int len){
	for(int i=0;i<len;i++){
		printf("%4d",arr[i]);
	}
	printf("\n");
}
