//wap to swap two numbers

#include<stdio.h>
void swap(int*,int*);
int main(){
    int x=10, y=200;
    printf("Before exchange, x=%d, y=%d", x,y);
    swap(&x,&y);
    printf("\nAfter exchange, x=%d, y=%d",x,y);
    return 0;
}
void swap(int*a,int*b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}