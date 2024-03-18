

#include<stdio.h>

int main()
{
	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			printf(" *");
		}
		printf("\n");
	}

	printf("-----------------------------\n");

	for(int k=0;k<5;k++){
		for(int l=5;l>k;l--){
			printf(" *");
		}
		printf("\n");
	}
	printf("-----------------------------\n");

	for(int a=0;a<=5;a++){
		for(int b=1;b<=a;b++){
			printf(" %d",b);
		}
		printf("\n");
	}

	printf("-----------------------------\n");

	int e;
	for(int a=0;a<=5;a++){
		e=5;
		for(int b=1;b<=a;b++){
			printf(" %d",e);
			e--;
		}
		printf("\n");
	}

	printf("-----------------------------\n");
	int y=65;
	for(int  o=0;o<4;o++){
		for(int p=0;p<=o;p++){
			printf(" %c",y);
			y++;
		}
		printf("\n");
	}

	printf("-----------------------------\n");
	int f=0;
	for(int w=0;w<4;w++){
		int g=65;
		g+=f;
		for(int v=4;v>w;v--){
			printf(" %c",g);
			g++;
		}
		f++;
		printf("\n");
		
	}
	return 0;

}
