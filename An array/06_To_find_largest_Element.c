#include<stdio.h>

int main(){
    int element[5], largest;
    int i;

    for(i=0;i<5;i++)
    {
        printf("\n element[%d]=", i);
        scanf("%d", &element[i]);
    }
    largest = element[0];
    for(i=1;i<5;i++)
    {
        if(element[i]>largest)
        largest = element[i];
    }
    printf("\n largest = %d", largest);
    return 0;
}