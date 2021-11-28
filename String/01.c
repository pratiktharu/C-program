//Program to take string and prinf it using %s

#include<stdio.h>

int main(){
    char s[34];
    printf("Enter Your name");
    scanf("%s", s);
    printf("Your name is %s", &s);
    return 0;
}