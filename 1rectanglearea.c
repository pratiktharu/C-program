#include<stdio.h>

int main(){
    int length, breadth;
    printf("What is the length\n");
    scanf("%d", &length);
    printf("What is the breadth\n");
    scanf("%d", &breadth);

    printf("The area of the rectangle is %d", length*breadth);
    return 0;
}
