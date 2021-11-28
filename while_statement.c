#include<stdio.h>

int main(){
    int num,sum=0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    while(sum<=100)
    {
        sum=sum + num;
    }
    printf("sum=%d", sum);
    return 0;
}