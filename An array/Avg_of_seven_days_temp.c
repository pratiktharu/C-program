//calculates the average of seven day's temperature

#include<stdio.h>

int main(){
    int i, sum;
    float temp[7];
    printf("Enter temperature of seven days\n");
    for(i=0;i<7;i++)
    {
        printf("Enter temperature of seven days %d:", i+1);
        scanf("%f", &temp[i]);
    }
    sum=0;
    for(i=0;i<7;i++)
    sum = sum + temp[i];
    printf("Average temperature of the week = %d", sum/7);
    return 0;
}