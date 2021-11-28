#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    FILE *ptr;
    ptr=fopen("pratik.txt", "w");
    if(ptr==NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter num:");
    scanf("%d", &num);
    fprintf(ptr,"%d", num);
    fclose(ptr);
    return 0;
}