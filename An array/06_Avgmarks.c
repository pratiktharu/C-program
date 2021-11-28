#include<stdio.h>

int main(){
    int i, sum;
    int marks[8];
    printf("Enter the marks of Eight students\n");

    for(i=0; i<8; i++)
    {
        printf("Enter marks of student %d:", i);
        scanf("%d", &marks[i]);
    }
    sum=0;
    for(i=0; i<8; i++)
    sum = sum + marks[i];
    printf("The Average marks is %d", sum/8);
    return 0;
}