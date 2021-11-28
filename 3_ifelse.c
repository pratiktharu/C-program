#include<stdio.h>

int main(){
    int age;
    printf("Enter you age:\n");
    scanf("%d", &age);

    if(age>=80){
        printf("You are above 80, you cannot drive\n");
    }
    else{
        printf("You caan drive\n");
    }
    return 0;
}