#include<stdio.h>
int main()
{
    int age;
    printf("Enter the value of age");
    scanf("%d",&age);
    if( age<18)
    {
        printf("You are not eligible to open a saving account ");
    }
    else if (age>=18 && age<=59)
    {
        printf(" You are eligible to open a saving account");
    }
    else if(age<=0)
    {
        printf("Invalid output");
    }
    else
    {
        printf(" You are eligible to open a senior citizen account");
    }
    return 0;
}
