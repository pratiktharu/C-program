// Write to a text file using fprintf()

#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr;
    int num,num1;
    fptr=fopen("sample.txt","r");
    fscanf(fptr,"%d",&num);
    fscanf(fptr,"%d",&num1);
    printf("THe value of num is %d\n", num);
    printf("The value of num1 is %d\n", num1);
    fclose(fptr);
    return 0;
}