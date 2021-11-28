#include<stdio.h>

int main(){
    float x, y;
    printf("Enter the value of x:");
    scanf("%f", &x);
    y=(x!=50)?((x<50)?(2*x+300):(50*x-100)):200;
    printf("y=%f", y);
    return 0;
}