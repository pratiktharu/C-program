#include<stdio.h>
void display(); // function prototype
int main(){
    int a;
    printf("This is first step\n");
    display();  //function call
    printf("This is last step\n");
    return 0;
}

// function definition
void display(){ 
    printf("This is second step\n");
}