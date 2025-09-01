#include<stdio.h>
int main()
{
    int a,b,sum,difference,product,division;
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    sum=a+b;
    difference=a-b;
    product=a*b;
    division=a/b;
    printf("%d\n %d\n %d\n %d\n",sum,difference,product,division);
    return 0;
}
