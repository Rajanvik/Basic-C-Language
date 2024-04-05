/*
::   whai is pointer ?

ek pointer jo ki another pointer variable adress hold karke rakhta hai usi ko hum pointer kahate hai.


Syntax ::         data-tpe *varaible name;


Note---> jo pointer variable ki address hold kar rahe hai. wo variable pahele se decleared hona chahiye hamare program me


Example ::         

int a=10;
int *p;
p=&a;

printf("a=%d",*p);

*/

#include<stdio.h>

int main()
{

   int a=10;
   int *p;
   p=&a;

   printf("a=%d",*p);

   return 0;
}