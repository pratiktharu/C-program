//Program to pass structures in a function by passing by value method

#include<stdio.h>
void display(struct student*);

struct student
{
    char name[50];
    int age;
    int roll;
    char sec;
};
int main(){
    struct student *s;
    int i;
    printf("Enter the name of a student");
    scanf("%s",s.name);
    printf("\n Enter age:");
    scanf("%c",&s.age);
    printf("\n Enter Roll");
    scanf(" %d",&s.roll);
    printf("Enter Section:");
    scanf("%f",&s.sec);
    display(&s);
}
void display(struct student *st)
{
    printf("name=%s\n Age=%d\nRoll=%d\nSec=%c", st->name,st->age,st->roll,st->sec);
}