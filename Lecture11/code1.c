// Call by value
#include<stdio.h>
int sum(){
    int x=5;
    int y=10;
    return x+y;
}
int main(){
    int x=10;
    int y=20;
    sum(x,y);
    int data= sum(&x,&y);
    printf("%d",data);
    printf("\n%d",x+y);

    return 0;
}

// call by Reference

#include<stdio.h>
int sum(int *x,int *y){
    int *x=50;
    int *y=50;
    int c=(*x)+(*y)
    return c;
}
int main(){
    int x=10;
    int y=20;
    sum(x,y);
    int data= sum(*x,*y);
    printf("%d",data);
    printf("\n%d",x+y);

    return 0;
} 