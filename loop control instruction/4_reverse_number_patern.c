#include<stdio.h>

int main(){
    int i, j, num;
    printf("Enter the number:\n");
    scanf("%d", &num);

    for(i=1;i<=num;i++)
    {
        printf("\n");

        for(j=1;j<=i;j++)
        {
            num=num;
            printf("%d", num);
        }
    }
    return 0;
}