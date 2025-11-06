#include<stdio.h>
int main()
{
    printf(" Name: Vagdoda Ritu\nID Number:25CE128\n");
    int area,perimeter,length,breadth;
    printf("Enter the value of length :");
    scanf("%d",&length);
    printf("Enter the value of breadth :");
    scanf("%d",&breadth);
    area= length*breadth;
    printf("Area of the rectangular plot is:%d\n",area);
    perimeter= 2*(length + breadth);
    printf("Perimeter of the rectangular plot is: %d",perimeter);
    return 0;
}
