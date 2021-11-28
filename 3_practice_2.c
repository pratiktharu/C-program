#include<stdio.h>

int main(){
    int physics, chemistry, math;
    float total;
    printf("Enter physics marks\n");
    scanf("%d", &physics);

    printf("Enter chemistry marks\n");
    scanf("%d", &chemistry);

    printf("Enter math marks\n");
    scanf("%d", &math);
    total = (physics + chemistry + math)/3;

    if((total<40) || physics<33 || chemistry<33 || math<33){
        printf("Your total percentage is %f so you are fail\n", total);
    }
    else{
        printf("Your total percentage is %f so you are pass\n", total);
    }
    return 0;
}