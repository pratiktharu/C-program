#include<stdio.h>
int add(int a, int b); /*function declaration(function prototype)*/
int main(){
    int x,y,r;
    printf("Enter any two numbers");
    scanf("%d%d", &x,&y);
    r=add(x,y);  /*function call, giving arguments a and b, where a and b are actual arguments(parameters)*/
    printf("sum=%d", r);
    return 0;
    }
    int add(int a, int b) /*function definition starts from this line, this first line is function declator*/
    {
        int sum;
        sum=a+b;
        return(sum);
    }
