#include<stdio.h>

int main(){
    int n,sum=0,r,a;
    printf("\nEnter the number:");
    scanf("%d",&n);
    a=n;
    do
    {
        r=n%10;
        sum = sum*10+r;
        n=n/10;
    } while (n>0);
    if(sum==a)
    {
        printf("\n%d is a palindrome",a);
    }
    else
    {
        printf("\n%d is not a  palindrome",a);
    }
    return 0;
}