#include<stdio.h>
int main()
{
    int i,j;
    for(int i=1;i<=5;i++){
        for(int j=0;j<=5;j++){
            printf(" ");
            if ( i==1 || i==5 || j==1 || j==5){
        printf("*");
    } else {printf(" ");}
        }
        printf("\n");
    }
    return 0;
}