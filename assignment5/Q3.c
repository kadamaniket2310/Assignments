#include<stdio.h>
void arrev(int arr[], int len);
void prnt_ary(int arr[],int len);

int main(){
	int arr[5]={1,2,3,4,5};
	printf("Original Array: ");
	prnt_ary(arr,5);
	arrev(arr,5);
	return 0;
}


void prnt_ary(int arr[],int len){
	for(int i=0;i<len;i++){
		printf("%4d",arr[i]);
	}
	printf("\n");
}
void arrev(int arr[],int len){
	int temp;
	for(int i=0,j=len-1;i<j;i++,j--){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;

	}
	printf("\nReverse Array: ");
	prnt_ary(arr,len);
}
