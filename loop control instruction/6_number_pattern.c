#include<stdio.h>
#include<conio.h>

int main(){
    int i, j, num,k;
    printf("Enter the number:\n");
    scanf("%d", &num);
    printf("\n");

    for(i=1;i<=num;i++)
    {
        printf("\n");

        for(j=1;j<=i;j++)
        {
            printf("");
        }
        for(k=i;k<=num;k++)
        {
            printf("%d", &k);
        }
    }
    return 0;
}