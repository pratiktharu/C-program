//Wap to write structure inside structure.

#include<stdio.h>

struct person 
{
    char name[50];
    int age;
};
struct student
{
    int roll;
    char sec;
    struct person p;
};
int main(){
    struct student s;
    printf("Enter name:");
    scanf("%s",s.p.name);
    printf("Enter age:");
    scanf("%d",s.p.age);
    printf("Enter roll:");
    scanf("%d",&s.roll);
    printf("Enter section:");
    scanf(" %c",&s.sec);
    printf("name=%s\n Age=%d\n Roll=%d\n sec=%c", s.p.name,s.p.age,s.roll,s.sec);
    return 0;
}