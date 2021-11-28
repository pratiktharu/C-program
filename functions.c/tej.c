#include<stdio.h>

int main(){
    float x1,x2,x3,y1,y2,y3,m1,m2,m3;
    printf("Enter the given coordinates:\n");
    scanf("%f%f%f%f%f%f", &x1,&x2,&x3,&y1,&y2,&y3);

    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    m3 = (y3-y1)/(x3-x1);
    if(m1 == m2 && m2 == m3 && m3 == m1)
    printf("The Coordinates you entered are collinear\n");
    else
    printf("The coordinates you entered are not collinear\n");
    return 0;
}