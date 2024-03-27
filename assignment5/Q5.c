#include<stdio.h>
void max(int arr[], int len);
void min(int arr[], int len);
void acpt_ary(int arr[],int len);
void prnt_ary(int arr[],int len);

int main(){
	int arr[5];
	acpt_ary(arr,5);
	printf("Array: ");
	prnt_ary(arr,5);
	max(arr,5);
	min(arr,5);
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
void max(int arr[],int len){
	int maxx=0;
	for(int i=0;i<len;i++){
		if(arr[i]>maxx){
			maxx=arr[i];
		}

	}
	printf("\nMaximum Element: %d\n",maxx);
}
void min(int arr[],int len){
	int minn=arr[0];
	for(int i=0;i<len;i++){
		if(arr[i]<minn){
			minn=arr[i];
		}

	}
	printf("\nMinimum Element: %d\n",minn);
}
