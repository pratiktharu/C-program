//WAP to store record of a student

#include<stdio.h>

int main(){
    struct student
    {
        char name[50];
        int roll;
        char sec;
        float marks;
    };
    struct student s={"Radhika",1234,'A',75.5}; 
    printf("\n name: %s \n roll: %d \nsec: %c \nmarks: %f", s.name,s.roll,s.sec,s.marks);   
    return 0;
}