#include<stdio.h>

int main(){
    int num, i;
    printf("Enter the number of stars:\n");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    printf("*");
    return 0;
}