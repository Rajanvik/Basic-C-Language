#include<stdio.h>
#include<stdlib.h>

typedef struct singlelinkedlist
{
    int data;
    struct singlelinkedlist *next;
}sl;

void create(sl **head)
{
    sl *current,*p;
    int ele;
    printf("\nEnter element : ");
    scanf("%d",&ele);
    if (*head == NULL)
    {
        *head = (sl *)malloc(sizeof(sl));
        (*head)->data = ele;
        (*head)->next = NULL;
    }
    else 
    {
        current = *head;
        while (current->next != NULL)
        {
            current= current->next;
        }
        p = (sl *)malloc(sizeof(sl));
        p->data = ele;
        current->next = p;
        p->next = NULL;
    }
}
void display(sl *head)
{
    if(head == NULL)
    {
        printf("\nEmpty likedlist");
    }
    else
    {
        while(head != NULL)
        {
            printf("%d->",head->data);
            head = head->next;
        }
        printf("NULL");
    }
}
int main()
{
    sl *head;
    head = NULL;
    while(1)
    {
        int ch;
        printf("\n1.create 2.display 3.exit");
        printf("\nenter choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: create(&head);
                break;
        case 2: display(head);
                break;
        case 3: return 0;
        }
    }
    return 0;
}
