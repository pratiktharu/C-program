//program to Add the corossponding elements of Two dimensional array and diplay the result

#include<stdio.h>

int main(){
    int i,j,num1[10][10],r1,c1,num2[10][10],r2,c2,num3[10][10];
    printf("Enter the maximum size of row and column of num1:");
    scanf("%d%d",&r1,&r2);
    printf("ENter the maximum size of row and column of num2:");
    scanf("%d%d",&r2,&c2);
    if(r1==r2 && c1==c2){
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Enter the num1[%d][%d]:",i,j);
            scanf("%d", &num1[i][j]);
        }
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Enter the num[%d][%d]:",i,j);
            scanf("%d", &num2[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<r2;j++)
        {
            num3[i][j]=num1[i][j]+num2[i][j];
            printf("\t%d",num3[i][j]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("Array size mismatch:");
    }
    return 0;
}