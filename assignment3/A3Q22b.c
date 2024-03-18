#include<stdio.h>

int main()
{
	int a=71;
	for(int i=0;i<4;i++){
		
		for(int j=3;j>i;j--){
			printf("    ");
		}
		for(int k=0;k<=i*2;k++){
			printf(" %c",a);
			a++;

		}
		for(int k=1;k<(i*2)+1;k++){
			printf(" %c",--a-1);
		}
		a-=3;
		printf("\n");

	}
//-------------------------------------------------
	a=67;
	for(int i=0;i<3;i++){
           for(int j=0;j<=i;j++){
               printf("    ");
          }
          for(int k=4;k>=i*2;k--){
              printf(" %c",a);
              a++;
 
          }
          for(int k=3;k>(i*2)-1;k--){
              printf(" %c",--a-1);
          }
          a+=1;
          printf("\n");
 
      }


	return 0;

}
