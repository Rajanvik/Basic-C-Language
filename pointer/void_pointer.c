/*
::  What is void pointer ?

-->A void pointer which is decleared by help of 'void keyword' is called void pointer.

Note--> Ye kis bhi tarah ki address ko hold karta hai .

Syntax ::      void *variable-name;

Example ::

int *p;
int a=10;
float b=10.5;

p=&a;
p=&b;

printf("a=%d\tb=%d",*p);
*/
#include<stdio.h>

int main()
{
	int *p;
    int a=10;
    float b=10.5;

//    p=&a;
	p=&b;

 //   printf("a=%d\n",(int)*p);
   printf("b=%f",(float)*p);
    return 0;
}
