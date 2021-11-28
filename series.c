#include<stdio.h>
#include<math.h>

int main(){
     int i,j,n,sign=-1,den;
     float x,sum=0,num,term;
     printf("Enter the value of x and number of terms n");
     scanf("%f%d", &x,&n);

    for(i=0;i<n;i++)
    {
        sign*=-1;
        num=pow(x,2*1);
        den=1;
        for(j=1;j<=2*i;j++)
        den*=j;
        term=sign*(num/den);
        sum+=term;
    }
    printf("e^(%f)=%f",x,sum);
    return 0;

}