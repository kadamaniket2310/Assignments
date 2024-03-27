#include<stdio.h>
void duplicate(int arr[], int len);
void acpt_ary(int arr[],int len);
void prnt_ary(int arr[],int len);

int main(){
	int arr[5];
	acpt_ary(arr,5);
	printf("Array: ");
	prnt_ary(arr,5);
	duplicate(arr,5);
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
void duplicate(int arr[],int len){
	for(int i=0;i<len-2;i++){
		for(int j=i+1;j<len-1;j++){
			if(arr[i]==arr[j]){
				for(int k=j-1;k<len;k++){
					arr[k]=arr[k+1];
					len-=1;
				}
			}
		}
	}
	prnt_ary(arr,4);
}
