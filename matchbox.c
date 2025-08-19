#include<stdio.h>
void main()
{
    int matchstick,user_pick,total_matchstick=21,computer_pick;
    scanf("%d",&matchstick);
    printf(" number of matchstick");
        {
            if(user_pick>0 && user_pick<5)
            {
             printf("Pick among the given range");
            }
        else
        {
            while(1)
            computer_pick=5-user_pick;
            printf("computer wins he game");
        }
        }
}
