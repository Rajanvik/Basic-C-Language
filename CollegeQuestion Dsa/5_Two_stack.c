#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int stack[MAX];
int top1 = -1;
int top2 = MAX;

void push1(int item)
{
    if (top1 == MAX - 1)
    {
        printf("stack overflow\n");
    }
    else
    {
        top1 = top1 + 1;
        stack[top1] = item;
    }
}

void push2(int item)
{
    if (top2 == - 1)
    {
        printf("stack overflow\n");
    }
    else
    {
        top2 = top2 - 1;
        stack[top2] = item;
    }
}

void pop1()
{
    int ele;
    if (top1 == -1)
    {
        printf("stack underflow\n");
    }
    else
    {
        ele = stack[top1];
        printf("%d is deleted ", ele);
        top1 = top1 - 1;
    }
}

void pop2()
{
    int ele;
    if (top2 == MAX - 1)
    {
        printf("stack underflow\n");
    }
    else
    {
        ele = stack[top2];
        printf("%d is deleted ", ele);
        top2 = top2 + 1;
    }
}

void display1()
{
    if (top1 == -1)
    {
        printf("stack underflow\n");
    }
    else
    {
        for (int i = 0; i <= top1; i++)
            printf("%d ", stack[i]);
    }
}

void display2()
{
    if (top2 == MAX-1)
    {
        printf("stack underflow\n");
    }
    else
    {
        for (int i = MAX-1; i >= top2; i--)
            printf("%d ", stack[i]);
    }
}

int main()
{
    int ele,ch;
    while(1)
    {
        printf("\n\t\t1. Push1");
        printf("\n\t\t2. Push2");
        printf("\n\t\t3. Pop1");
        printf("\n\t\t4. Pop2");
        printf("\n\t\t5. Display 1");
        printf("\n\t\t6. Display 2");
        printf("\n\t\t7. exit");
        printf("\nEnter Choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: printf("Enter element : ");
                    scanf("%d",&ele);
                    push1(ele);
                    break;
            case 2: printf("Enter element : ");
                    scanf("%d",&ele);
                    push2(ele);
                    break;
            case 3: pop1();
                    break;
            case 4: pop2();
                    break;
            case 5: display1();
                    break;
            case 6: display2();
                    break;
            case 7: return 0;
        }
    }
    return 0;
}