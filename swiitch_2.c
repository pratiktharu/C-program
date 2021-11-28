#include<stdio.h>

int main(){
    char operator;
    int a,b;
    float result;
    printf("Enter a arithmetic operator: +,-,*or/");
    operator=getche();
    printf("\nEnter value of a and b:");
    scanf("%d%d",&a, &b);

    switch(operator)
    {
        case'+':
               result=a+b;
               printf("\na+b=%f",result);
               break;
        case'-':
            result=a-b;
            printf("\na-b=%f",result); 
            break;
        case'*':
               result=a*b;
               printf("\na*b=%f",result);
               break;
        case'/':
               result=a/b;
               printf("\na/b=%f",result);
               break;      
        defalt:  
               printf("Enter +or-or*or/");
               break;                
    }

    return 0;
}