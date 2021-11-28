#include<stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter four numbers:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if(a>b){
        if(a>c)
        {
            if(a>d){
            printf("%d is the greatest of four", a);
            }
            else
            {
            printf("%d is the greatest of four", d);
            }
        }
    }
    else if(b>c)
    {
        if(b>d){
            printf("The greatest of four is %d", b);
        }
        else
        {
            printf("%d is the greatest of four", d);
        }
    }
    else if(c>d)
    {
        printf("%d is the greatest of four", c);
    }
    else
    {
        printf("%d is the greatest of four", d);
    }
    return 0;
}