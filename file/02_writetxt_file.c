// Write to a text file using fprintf()

#include<stdio.h>

int main(){
    FILE *fptr;
    int num;
    fptr=fopen("sample.txt","w");
    printf("Enter num:");
    scanf("%d",&num);
    fprintf(fptr,"%d",num);
    fclose(fptr);
    return 0;
}
