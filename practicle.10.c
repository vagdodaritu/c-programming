#include<stdio.h>
int main()
{
    int choice,burger,pizza,pasta,sandwich,frenchfries,amount;
    pizza=200;
    pasta=120;
    sandwich=100;
    frenchfries=80;
    burger=150;
    printf("Enter 1 for burger\n");
    printf("Enter 2 for pizza\n");
    printf("Enter 3 for pasta\n");
    printf("Enter 4 for sandwich\n");
    printf("Enter 5 for frenchfries\n");
    printf("Enter the choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        amount+=burger;
        printf("burger added");
        break;
    case 2:
        amount+=pizza;
        printf("pizza added");
        break;
    case 3:
        amount+=pasta;
        printf("pasta added");
        break;
    case 4:
        amount+=sandwich;
        printf("sandwich added");
        break;
    case 5:
        amount+=frenchfries;
        printf("frenchfries added");
        break;
    default:
        printf("Enter the valid input");
        break;
        printf("Enter the total amount");
    }
    return 0;
}
