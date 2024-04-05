#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int stack[MAX];
int top = -1;
int count = 0;

void push(int item)
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
void pop()
{
    int ele;
    if (top == -1)
    {
        printf("stack underflow\n");
    }
    else
    {
        ele = stack[top];
        top = top - 1;
        count++;
        printf("%d is deleted ", ele);
    }
    solve(count);
}
void solve(int count)
{
    if(count == MAX/2)
    {
        int ele;
        if (top == -1)
        {
            printf("stack underflow\n");
        }
        else
        {
            ele = stack[top];
            top = top - 1;
            printf("%d is deleted ", ele);
        }
        return ;
    }
}
void display()
{
    if (top == -1)
    {
        printf("stack underflow\n");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
    }
}

int main()
{
    int ele,ch;
    while(1)
    {
        printf("\n\t\t1. Push      2. Pop");
        printf("\n\t\t3. Display   5. exit");
        printf("\nEnter Choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: printf("Enter element : ");
                    scanf("%d",&ele);
                    push(ele);
                    break;
            case 3: display();
                    break;
            case 4:  solve(count);
            case 5: return 0;
        }
    }
    return 0;
}