#include<stdio.h>
int main()
{
    float total_amount,final_amount,discount;
    printf("Enter the value of total amount");
    scanf("%f",&total_amount);
    if(total_amount<=0)
       {
           printf("Invalid output");
       }
    else if(total_amount<1000)
    {
        printf("No discount is applied");
    }
    else if(total_amount>=1000 && total_amount<=5000)
    {
        discount=(total_amount*0.1);
        final_amount=(total_amount-discount);
        printf("%f",final_amount);
    }
    else
    {
        discount=(total_amount*0.2);
        final_amount=(total_amount-discount);
        printf("%f",final_amount);
    }
    return 0;
}
