#include<stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    length=70;
    printf("Enter value of length:%d\n",length);
    breadth=90;
    printf("Enter value of breadth:%d\n",breadth);
    area=length*breadth;
    printf("Enter value of area is:%d\n",area);
    perimeter=2*(length+breadth);
    printf("Enter value of perimeter is %d\n",perimeter);
    return 0;
}
