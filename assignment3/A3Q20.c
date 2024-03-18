/*Write a program to display
a. Prime numbers between 1 to 100
b. Armstrong Numbers between 1 to 500
*/


#include <stdio.h>

int Prime(int num)
{
    if(num < 2){
        return 0;
    }
    else{   
        int x = num/2;
        for(int i = 2; i <=x; i++)
        {
            if(num % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int a = 1, b = 100;
    
    for(int i=a; i <= b; i++){
        if(Prime(i))
            printf("%d\n ",i);
    }
 
    return 0;
}
