#include<stdio.h>
void acpt_ary(int arr[],int len);
void bubble(int arr[],int len);
void prnt_ary(int arr[],int len);

int main(){
	int arr[5];
	acpt_ary(arr,5);
	prnt_ary(arr,5);
	bubble(arr, 5);
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
void bubble(int arr[],int len){
	int temp;
	for(int j=len;j>0;j--){
		for(int i=0;i<len-1;i++){
			if(arr[i]>arr[i+1]){
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		prnt_ary(arr,5);
	}
}	
