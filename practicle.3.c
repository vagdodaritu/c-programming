#include<stdio.h>
int main()
{
    float height,weight,bmi;
    printf("Enter the value of height");
    scanf("%d",&height);
    printf("Enter the value of weight");
    scanf("%d",&weight);
    //BMI calcutation
    bmi=weight/(height*height);
    printf("Body mass index is %f\n");
    if(bmi<18.5)
    {
        printf("category:Underweight\n");
    }
    else if(bmi>=18.5 && bmi<24.9)
    {
        printf("category:Normalweight\n");
    }
    else if(bmi>=25 && bmi<29.9)
    {
        printf("category:Overweight\n");
    }
    else
    {
        printf("category:obesse\n");
    }
    return 0;
}
