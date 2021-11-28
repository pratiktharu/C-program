//WAP to read a positive integer and dispaly the sequence.

#include<stdio.h>

int main(){
    int n,i,a=1;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    i=1;
    while(i>=1)
    {
        printf("%d",i);
        if(i==n)
        {
            a=-a;
        }
        i=i+a;
    }
    return 0;
}