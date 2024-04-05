#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 5

char stack[MAX];
int top = -1;

void push(char item)
{
    if (top == MAX - 1)
    {
        printf("stack overflow\n");
    }
    else
    {
        top = top + 1;
        stack[top] = item;
    }
}
char pop()
{
    char ele;
    if (top == -1)
    {
        printf("stack underflow\n");
    }
    else
    {
        ele = stack[top];
        printf("%c is deleted ", ele);
        top = top - 1;
        return ele;
    }
    return ' ' - 1;
}
int main()
{
   char str[MAX];
   printf("Enter a string : ");
   gets(str);
   for(int i = 0;i<strlen(str);i++)
   {
       push(str[i]);
   }
   for(int i = 0;i<strlen(str);i++)
   {
        str[i] = pop();
   }
    printf("reversed string is : %s",str);
    return 0;
}