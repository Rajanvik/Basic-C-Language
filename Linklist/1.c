#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
}sl;

// Traverse link list
void display(sl *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}

int main()
{
    sl *head;
    sl *second;
    sl *third;

    // allocated memory for nodes in the linked list in Heap
    head = (sl*)malloc(sizeof(sl));
    second = (sl*)malloc(sizeof(sl));
    third = (sl*)malloc(sizeof(sl));
     
    //Assign value values
    head->data = 7;
    // link first node to second node
    head->next = second;

    //Assign value values
    second->data = 47;
    // link second node to third node
    second->next = third;

    //Assign value values
    third->data = 6;
    // terminate the list at the third node
    third->next = NULL;

    display(head);
    
    return 0;
} 