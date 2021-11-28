#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int num, rem, sum=0,x,i=0;
    printf("Enter a Binary number:\n");
    scanf("%d", &num);
    x=num;

    while(num!=0)
    {
        rem=num % 10;
        sum=sum+rem*pow(2,i);
        i++;
        num=num/10;
    }
    printf("\n The decimal equivalent of %d=%d", x, sum);
    return 0;
}