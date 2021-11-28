#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int num, base=1, rem, sum=0, x;
    printf("Enter a Decimal integer number:\n");
    scanf("%d", &num);
    x=num;

    while(num!=0){
        rem=num % 2;
        sum=sum+rem*base;
        base=base*10;
        num=num/2;
    }
    printf("\n The binary equivalent of %d=%d",x,sum);

    return 0;
}