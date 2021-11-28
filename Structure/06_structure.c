/*Wap to manipulate complex numbers using structures. The structure should contain real and 
imaginary part. Write separate functions to add and subtract complex numbers.*/

#include<stdio.h>
struct complexnum
{
    float real;
    float imag;
};
void add(struct complexnum,struct complexnum);
void subtract(struct complexnum,struct complexnum);
int main(){
    struct complexnum n1,n2;
    printf("Enter real and imaginary part of first complex number:");
    scanf("%f%f",&n1.real,&n1.imag);
    printf("Enter real and imaginary part of second complex number:");
    scanf("%f%f",&n2.real,&n2.imag);
    add(n1,n2);
    subtract(n1,n2);
    return 0;
}
void add(struct complexnum nf,struct complexnum ns)
{
    float realsum,imagsum;
    realsum=nf.real+ns.real;
    imagsum=nf.imag+ns.imag;
    printf("The sum of complex numbers=%f+i(%f)\n",realsum,imagsum);
}
void subtract(struct complexnum nf,struct complexnum ns)
{
    float realdif,imagdif;
    realdif=nf.real-ns.real;
    imagdif=nf.imag-ns.imag;
    printf("\n The sum of complex numbers=%f+i(%f)\n",realdif,imagdif);
}