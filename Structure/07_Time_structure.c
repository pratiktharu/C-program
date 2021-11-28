/*Create a structure TIME containing hour, minutes and seconds as its member. Write a program
that uses this structure to input start time and stop time to a function, which returns the sum 
and difference of the start time and stop time in the main program */

#include<stdio.h>


struct TIME
{
    int hour;
    int minutes;
    int seconds;
};
void display(struct TIME,struct TIME*,struct TIME*);
void main(void)
{
    struct TIME start,stop,sum={0,0,0},diff={0,0,0};
    printf("\n Enter hour,minutes and seconds of start time:");
    scanf("%d%d%d",&start.hour,&start.minute,&start.seconds);
    printf("\n Enter hour,minutes and seconds of stop time:");
    scanf("%d%d%d",&stop.hour,&stop.minute,&stop.seconds);
    display(start,stop,&sum,&dif);
    printf("\n Hours:%d\nMinutes:%d\nseconds:%d\n",sum.hour,sum.minutes,sum.second);
    printf("\nHours:%d\nMinutes:%d\nSeconds:%d",dif.hour,dif.minute,dif.seconds);
}
void display(struct TIME startt,struct TIME stopt,struct TIME *sumt,struct TIME*dift)
{
    int n=0;
    sumt->seconds=startt.seconds+stopt.seconds;
    if(sumt->seconds>60)
    {
        
    }
}
