#include<stdio.h>
int swap(int *x,int *y){
*x=*x+*y;
*y=*x-*y;
*x=*x-*y;
printf("%d%d",*x,*y);
}

int main(){
    int x=10,x=20;
    printf("value after swaping");
    swap();
 //   printf("%d",z);
    return 0;
}