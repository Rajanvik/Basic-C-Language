#include<stdio.h>
#include<stdlib.h>

int main()
{
    //creation of stack
    stack <int> s;

   //push operation
   s.push(3);
   s.push(1);

   //pop
   s.pop();

   printf("Printing top element : ",s.top());
   return 0;
}