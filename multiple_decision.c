#include<stdio.h>

int main(){
    unsigned int n;
    printf("Enter a positive integer:\n");
    scanf("%d", &n);

    if(n%2==0){
        if(n>100)
        printf("The number you entered is even number and is greater than 100");
        else
        printf("The number you entered is an even but lesser than 100");
    }
    else{
        if(n%11==0 && n%7!=0)
        printf("The number you entered is odd and divisible by 11 and not by 7");
        else
        printf("It is an odd number not divisible by 11 and by 7 as well");
    }
    return 0;
}