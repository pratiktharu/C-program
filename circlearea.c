#include<stdio.h>

int main(){
    int radius;
    float pi = 3.14;

    printf("Enter the radius of the circle");
    scanf("%d", &radius);
    printf("The area of a circle is %f",pi*radius*radius);
    int height = 4;
    printf("\nThe volume of this cylinder is %f", pi * radius * radius* height);

    return 0;
}