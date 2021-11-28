//program to sort the numbers in ascending order by using function.

#include<stdio.h>
void sort(int a[]);
int main(){
    int i,j,temp;
    int a[4];
    for(i=0;i<4;i++){
    printf("/nEnter the numbers:");
    scanf("%d", &a[i]);
    }
    sort(a);
    return 0;
}
void sort(int a[])  
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
}