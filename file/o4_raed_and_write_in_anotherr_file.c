//Wap to read the information of a name "data.txt" and write its contents to another file "record.txt".

#include<stdio.h>
#include<stdlib.h> //for exit
#include<conio.h>

int main(){
    FILE *fptr1, *fptr2;
    char filename[100],c;
    printf("Enter the file name to open for reading \n");
    scanf("%s",filename);
    //open one file fo reading
    fptr1=fopen(filename,"w+");
    if(fptr1==NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
    printf("Enter thr filename to open for writing \n");
    scanf("%s", filename);
    //Open another file for writing
    fptr2=fopen(filename,"w");
    if(fptr2==NULL)
    {
        printf("Cannot open file %s \n",filename);
        exit(0);
    }
    //Read contents from file
    c=fgetc(fptr2);
    while(c!=EOF)
    {
        fputc(c,fptr2);
        c=fgetc(fptr1);
    }
    printf("\n Contents copied to %s", filename);
    fclose(fptr1);
    fclose(fptr2);
    getch();
    return 0;
}