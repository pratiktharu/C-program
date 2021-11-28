#include<stdio.h>

int main(){
    int n,i,sum=0;
    printf("Enter the natural number:\n");
    scanf("%d", n);

    for(i=0; i<=n; i++){
    sum = n + i;
    }
    printf("THe total sum is %d\n", sum);
    return 0;
}