#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void insert(int ele){
    if (rear == MAX-1){
        printf("\nQueue is full");
    }
    else{
        rear = rear + 1;
        queue[rear] = ele;
    }
}

void deQueue() {
  if( front == rear){
    printf("\nUnderflow");
  }
  else{
    front = front + 1;
    int del = queue[front];
    printf("\ndeleted = %d",del);
  }
}

void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!");
  else {
  
    printf("\nQueue elements are:");
    for (int i = front+1; i <= rear; i++)
      printf("%d  ", queue[i]);
  }
  printf("\n");
}
int main(){
    insert(2);
    insert(1);
    insert(7);
    insert(9);
    display();
    deQueue();
    insert(10);
    display();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();

    return 0;
}