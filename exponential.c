#include<stdio.h>
#include<math.h>

int main(){
     int i,j,n,den;
     float x,sum=0,num,term;
     printf("Enter the value of x and number of terms n");
     scanf("%f%d", &x,&n);

    for(i=0;i<n;i++)
    {
        num=pow(x,1);
        den=1;
        for(j=1;j<=i;j++)
        den*=j;
        term=(num/den);
        sum+=term;
    }
    printf("cos(%f)=%f",x,sum);
    return 0;
}
