#include<stdio.h>

int main(){
    int i,j,rows,columns;
    printf("Enter row and column size:");
    scanf("%d%d", &rows,&columns);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=columns;j++)
        {
            printf("%d\t",i*j);
        }
        printf("\n");
    }
    return 0;
}