#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void insert(int value) {
  if (rear == MAX - 1)
    printf("\nQueue is Full!!");
  else {
    if (front == -1)
      front = 0;
    rear++;
    queue[rear] = value;
  }
}

void delete() {
  if (front == -1)
    printf("\nQueue is Empty!!");
  else {
    printf("\nDeleted : %d", queue[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}

// Function to print the queue
void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    printf("\nQueue elements are:\n");
    for (int i = front; i <= rear; i++)
      printf("%d  ", queue[i]);
  }
  printf("\n");
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
