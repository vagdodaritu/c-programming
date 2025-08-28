#include<stdio.h>
#include<limits.h>
#include<float.h>
int main ()
{
    //char
    printf("Data Types;char\n");
    printf("Size:%lu bytes\n",sizeof(char));
    printf("Range:%d to %d\n\n",CHAR_MIN,CHAR_MAX);
    //unsigned char
    printf("Data Types;unsigned char\n");
    printf("Size:%lu bytes\n",sizeof(unsigned char));
    printf("Range:0 to %u\n\n",UCHAR_MAX);
    //int
    printf("Data Types:int\n");
    printf("Size:%lu bytes\n",sizeof(int));
    printf("Range:%d to %d\n\n",INT_MIN,INT_MAX);
    //unsigned int
    printf("Data Types;unsigned int\n");
    printf("Size:%lu bytes\n",sizeof(unsigned int));
    printf("Range:0 to %u\n\n",UINT_MAX);
    //short
    printf("Data Types:short\n");
    printf("Size:%lu bytes\n",sizeof(short));
    printf("Range:%d to %d\n\n",SHRT_MIN,SHRT_MAX);
    //long
    printf("Data Types:long\n");
    printf("Size:%lu bytes\n",sizeof(long));
    printf("Range:%ld to %ld\n\n",LONG_MIN,LONG_MAX);
    //float
    printf("Data Types:float\n");
    printf("Size:%lu bytes\n",sizeof(float));
    printf("Range:%e to %e\n\n",FLT_MIN,FLT_MAX);
    //double
    printf("Data Types:double\n");
    printf("Size:%lu bytes\n",sizeof(double));
    printf("Range:%e to %e\n\n",DBL_MIN,DBL_MAX);
    //long double
    printf("Data Typeslong double\n");
    printf("Size:%lu bytes\n",sizeof(long double));
    printf("Range:%le to %le\n\n",LDBL_MIN,LDBL_MAX);
    return 0;
}
