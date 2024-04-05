#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void insert(int item)
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("overflow\n");
    }
    else
    {
        rear = rear + 1;
        queue[rear] = item;
        if (rear == 0)
        {
            front = 0;
        }
    }
}

void delete()
{
    int ele;
    if ((front == -1 && rear == -1) || (front >rear))
    {
        printf("underflow\n");
    }
    else
    {
        ele = queue[front];
        printf("%d is deleted ", ele);
        front = front + 1;
    }
}

void display()
{
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
}

int main()
{
    int ele,ch;
    while(1)
    {
        printf("\n\t\t1. Push");
        printf("\n\t\t2. Pop");
        printf("\n\t\t3. Display");
        printf("\n\t\t4. exit");
        printf("\nEnter Choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: printf("Enter element : ");
                    scanf("%d",&ele);
                    insert(ele);
                    break;
            case 2: delete();
                    break;
            case 3: display();
                    break;
            case 4: return 0;
        }
    }
    return 0;
}
