// WAP to print fibonicci series untill the term is less than 500.

#include<stdio.h>

int main(){
    int a=0,b=1,c;
    printf("Fibonacci series until term 500:");
    while(a<=500){
    printf("%d\t",a);
    c=a+b;
    a=b;
    b=c;
    }
    return 0;
}