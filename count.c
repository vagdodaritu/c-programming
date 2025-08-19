#include<stdio.h>
int main()
{
    int seconds;
    printf("Enter the number of seconds");
    scanf("%d",&seconds);
    {
        if( seconds<0)
        {
            printf("Invalid stetment");
        }
        else
        {
            while(seconds>0)
            {
            printf("%d",&seconds);
            sleep(1);
            seconds--;
            }
        }
    printf(" Countdown Completed ");
    return 0;
    }

