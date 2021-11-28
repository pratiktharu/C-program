#include<stdio.h>

int main(){
    char s[34];
    printf("Enter Your name");
    gets(s);
    puts(s);
    //printf("Your name is %s", &s);
    return 0;
}