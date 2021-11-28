#include<stdio.h>

int main(){
    int i=0;
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);

    do{
        printf("The value you entered upto %d\n", i+1);
        i++;
    }while(i<n);
    return 0;
}
