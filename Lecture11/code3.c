// swap using three variable
#include<stdio.h>
int swap(int *a,int *b){
     int temp=*a;
    *a=*b;
    *b=temp;
    

}
int main(){
    int a=5;
    int b=10
    swap(&a,&b);
    printf("%d",swap);
    return 0;
}