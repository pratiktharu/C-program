#include<stdio.h>

int main(){
    int num;
    printf("Enter a num");
    scanf("%d", &num);

    if(num==1){
        printf("Your number is 1");
    }
    else if(num==2){
        printf("your number is 2");
    }
    else if(num==3){
        printf("your number is 3");
    }
    else{
        printf("yor number is not 1, 2, 3");
    }
    return 0;
}