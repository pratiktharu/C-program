#include<stdio.h>

int main(){
    int sum,rem;long int n;
    printf("Enter an integer number:");
    scanf("%ld",&n);
    do
    {
        sum=0;
        do
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }while(n!=0);
        n=sum;
    }while(sum/10!=0);
    printf("Sum=%d",sum);
    return 0;
}