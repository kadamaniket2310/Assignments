#include<stdio.h>
#include<math.h>
int pwr(int, int);
int main() {
    int n,m;
    printf("Enter a Number & Power: \n");
    scanf("%d%d",&n,&m);
    printf("%d\n",pwr(n,m));
    return 0;
}

int pwr(int n,int m) {
	if(m==0)
		return 1;
	return n*pwr(n,m-1);
	
	//return n;
}

