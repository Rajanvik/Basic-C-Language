#include<stdio.h>

int main()
{
    float a = 5/4;            // not type casting
    printf("a = %f\n",a);     // a = 1.000000

   
    float b =(float)5/4;      // Type Casting
    printf("b = %f",b);       //  b = 1.250000 
    return 0;
}