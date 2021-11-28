//program that write to a binary fileusin fwrite()

#include<stdio.h>
#include<stdlib.h>
struct threeNUM
{
    int n1,n2,n3;
};

int main(){
    int n;
    struct threeNUM num;
    FILE *fptr;
    for(n==1;n<5;++n)
    {
        num.1=n;
        num.n2=5*n;
        num.n3=5*n+1;
        fwrite(&num,sizeof(struct threeNUM),1,fptr);
    }
    fclose(fptr);
    return 0;
}