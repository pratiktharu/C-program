//Program to sort the elements in ascending order

#include<stdio.h>

int main(){
    int i,j,temp;
    int a[4];
    for(i=0;i<4;i++)
    {
        printf("Enter element:%d",i);
        scanf("%d",&a[i]);
    }

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
    return 0;
}