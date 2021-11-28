#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)
    {
        printf("The character you entered is lowercase\n");
    }
    else{
    printf("the character you entered is not a lowercase\n");
    }
    return 0;
}