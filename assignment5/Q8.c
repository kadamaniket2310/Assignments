#include<stdio.h>
void acpt_ary(int arr[],int len);
void prnt_ary(int arr[],int len);
void search(int arr[],int len,int e);
int main(){
	int arr[5],e;
	acpt_ary(arr,5);
	prnt_ary(arr,5);
	printf("Enter element to search: \n");
	scanf("%d",&e);
	search(arr,5,e);
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
void search(int arr[],int len,int e){
	int fnd=0;
	for(int i=0;i<len;i++){
		if(arr[i]==e){
			printf("The element is at index: %d\n",i);
			fnd=1;
			break;
		}
	}
	if(fnd==1)
		return 0;
	else{
		printf("-1");
		return -1;
		}
}
