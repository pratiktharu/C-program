//program to store data of multiple students.
#include<stdio.h>

int main(){
    struct student
    {
        char name[50];
        int roll;
        char sec;
        float marks;
    };
    struct student s;
    int i,j;
    for (i=0;i<3;i++){
    printf("Enter the name of a student");
    scanf("%s",s.name);
    printf("\n Enter the roll student");
    scanf("%d",&s.roll);
    printf("\n Enter the section of student");
    scanf(" %c",&s.sec);
    printf("Enter the marks of student");
    scanf("%f",&s.marks);
    }
    for(j=0;j<3;j++){
    printf("\n Name: %s \n Roll: %d \n Section: %c \n marks: %f", s.name,s.roll,s.sec,s.marks);
    }
    return 0;

}