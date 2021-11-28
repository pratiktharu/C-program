/*program to pass elements of array to a function called sort. The function sort should help to arrange the elements of array in descending.Create
another function named display that helps display the elements of sorted array*/

#include<stdio.h>

int main()
{
    int i,j,row,col;
    int a[10][10];
    printf("Enter the size of row and column:\n");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of Matrix");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe matrix is:");
    for(i=0;i<row;i++)
    {
        printf("\n");
        for(j=0;j<col;j++){
        printf("%d ",a[i][j]);
        }
    }
    //sort(a);
    //display(a[i]);
    return 0;
}
/*void sort(int n,int a[])  
{
    int i,j,temp;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nSorted array is:");
    for(i=0;i<4;i++)
    {
        printf("\na[%d]=%d", i, a[i]);
    }
}*/