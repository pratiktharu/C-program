//Wap that prompts a user to input average marks of a student and adds up 10% bonus marks if his/her average marks is greater than or equal to 65%.

#include<stdio.h>
#include<conio.h>
int main(){
    float marks;
    printf("Enter you marks obtained:");
    scanf("%f", &marks);
    if(marks>=65)
    {
        marks = marks +marks*0.1;
    } 
    printf("New marks= %.2f", marks);
    return 0;
}