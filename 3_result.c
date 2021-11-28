#include<stdio.h>

int main(){
    int percentage;
    printf("Enter your percentage marks (0 - 100");
    scanf("%d", &percentage);

    switch(percentage / 10){
        case 9:
            printf("Grade: A");
            break;
        case 8:
            printf("Grade: B");
            break;
        case 7:
            printf("Grade: c");
            break;
        case 6:
            printf("Grade: D");
            break;
        case 5:
            printf("Grade: E");
            break;
        default:
            printf("Grade: F");
            break;                
    }
    return 0;
}