#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int stack[MAX];
int top = -1;

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
        printf("%d is deleted ", ele);
        top = top - 1;
    }
}
void isEmpty()
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("stack is not empty\n");
    }
}

void peak()
{
    if (top > 0) 
    {
      int ans = stack[top];
      printf("peak = %d\n",ans);
    }
    else
    {
        printf("stack is empty\n");
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
            printf("%d ", stack[i]);
    }
}

int main()
{
    int ele,ch;
    while(1)
    {
        printf("\n\t\t1. Push");
        printf("\n\t\t2. Pop");
        printf("\n\t\t3. Empty");
        printf("\n\t\t4. Peak");
        printf("\n\t\t5. Display");
        printf("\n\t\t6. exit");
        printf("\nEnter Choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: printf("Enter element : ");
                    scanf("%d",&ele);
                    push(ele);
                    break;
            case 2: pop();
                    break;
            case 3: isEmpty(); 
                    break;
            case 4: peak(); 
                    break;
            case 5: display();
                    break;
            case 6: return 0;
        }
    }
    return 0;
}
