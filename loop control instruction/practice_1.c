#include<stdio.h>

int main(){
    int i,n;
    printf("The multiplication table of number I want is:");
    scanf("%d", &n);
    for(i=1;i<=10;i++){
        printf("n x %d = %d\n", i, n*i);
    }
    return 0;
}