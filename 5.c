#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5,average,total,percentage;
    printf("Enter the value of sub1");
    scanf("%f",&sub1);
    printf("Enter the value of sub2");
    scanf("%f",&sub2);
    printf("Enter the value of sub3");
    scanf("%f",&sub3);
    printf("Enter the value of sub4");
    scanf("%f",&sub4);
    printf("Enter the value of sub5");
    scanf("%f",&sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    average=(sub1+sub2+sub3+sub4+sub5)/5;
    percentage=(total*100)/500;
    printf("%f\n %f\n %f\n",total,average,percentage);
    return 0;
}
