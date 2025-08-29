#include<stdio.h>
#include<conio.h>
void main ()
{
    float w,m,lm,lw,ilm,ilw;
    long int p=1441981744;
    float pw=48.4;
    float lro=85.95;
    float lrm=80.95;
    float lrw=62.84;


    w=pw*p/100;
    m=p-w;

    lm=lrm*m/100;
    lw=lrm*w/100;

    ilm=m-lm;
    ilw=w-lw;

    printf("the numberof illiterate men=%",ilm);
    printf("\nthe munber of illerate women%d",ilw);
    getch();
}
