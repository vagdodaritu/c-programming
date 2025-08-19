#include<stdio.h>
int main()
{
    int x;
    scanf("%d,&x");
    printf("Enter value of x");
    for( x=10; x <=100; x= x+10);
    if( x %=10)
    {
        printf("Enter the value of each refill per minute");
    }
    return 0;
}
