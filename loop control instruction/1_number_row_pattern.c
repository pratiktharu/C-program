#include<stdio.h>

int main(){
    int i,j,num;
    printf("Enter the number upto which range is to be displayed:\n");
    scanf("%d", &num);

    for(i=1;i<=num;i++)
    {
        printf("\n");

        for(j=1;j<=num;j++)
        {
            printf("%d", j);
        }
    }
    return 0;
}