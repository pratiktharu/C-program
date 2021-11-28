#include<stdio.h>
float add(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);

int main(){
    float a,b,sum,dif,product,quotient;
    char ch,flag;

    do{
        printf("Enter any operator(+,-,*,/):\n");
        scanf("%c", &ch);
        printf("Enter values of a and b:\n");
        scanf("%f%f", &a, &b);
        switch(ch)
        {
            case'+':
            sum=add(a,b);
            printf("Sum = %f", sum);
            break;

            case'-':
            dif=sub(a,b);
            printf("Difference = %f", dif);
            break;

            case'*':
            product=mul(a,b);
            printf("Product = %f", product);
            break;

            case'/':
            quotient=div(a,b);
            printf("Quotient = %f", quotient);
            break;

            default:
            printf("Enter any above shown characters");
            break;
        }
        printf("\n\n Enter e to exit\nany character to continue\t");
        scanf("%c", &flag);
    }while(flag!='e');
}
float add(float p, float q)
{
    return p+q;
}
float sub(float p, float q)
{
    return p-q;
}
float mul(float p, float q)
{
    return p*q;
}
float div(float p, float q)
{
    return p/q;
}