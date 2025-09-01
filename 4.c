#include<stdio.h>
int main()
{
    int number,square,cube;
    printf("Enter the value of number");
    scanf("%d",&number);
    square=number*number;
    cube=number*number*number;
    printf("%d\n%d\n",square,cube);
    return 0;
}
