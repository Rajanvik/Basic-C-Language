#include<stdio.h>
#include<stdlib.h>
typedef struct doublylinkedlist
{
    int val;
    struct doublylinkedlist *next;
    struct doublylinkedlist *prev;
}dl;
void create(dl **header,int ele)
{
    dl *current,*p;
    if(*header == NULL)
    {
        *header=(dl*)malloc(sizeof(dl));
        (*header)->val=ele;
        (*header)->prev=NULL;
        (*header)->next=NULL;
    }
    else
    {
        current=*header;

        while(current->next!=NULL)
        {
          current=current->next;
        }
        p=(dl*)malloc(sizeof(dl));
        p->val=ele;
        current->next = p;
        p->prev = current;
        p->next=NULL;           
    }
}
void insert_before(dl **header,int target, int ele)
{
    dl *current,*pre,*p;
    current=*header;
    if(current->val==target)
    {
        p=(dl*)malloc(sizeof(dl));
        p->val=ele;
        p->next=current;
        p->prev=*header;
        *header=p;
    }
    else
    {
        while(current->val!=target)
        {
          pre=current;
          current=current->next;
        }
        p=(dl*)malloc(sizeof(dl));
        p->val=ele;
        p->next=current;
        current->prev=p;
        p->prev=pre;
        pre->next=p;
    }
}
void insert_after(dl **header,int target, int ele)
{
    dl *current, *p;
    current=*header;
    while(current->val!=target)
       current=current->next;
    if(current->next!=NULL)
    {
      p=(dl*)malloc(sizeof(dl));
      p->val=ele;
      p->next=current->next;
      p->prev=current;
      current->next=p;
      current->next->prev=p;
    }
    else
    {
        p=(dl*)malloc(sizeof(dl));
        p->val=ele;
        p->next=NULL;
        p->prev=current;
        current->next=p;
    }
}
void deletion(dl **header,int target)
{
    dl *current,*pre;
    current=*header;
    if(current->val==target)
    {
        *header=current->next;
        current->next->prev=*header;
        free(current);
    }
    else
    {
        while(current->val!=target)
        {
           pre=current;
           current=current->next;
        }
        if(current->next!=NULL)
        {
           pre->next=current->next;
           current->next->prev=pre;
           free(current);   
        }
        else
        {
            pre->next=NULL;
            free(current);
        }
    }
}
void display(dl *header)
{
    if (header == NULL)
    {
        printf("\ndoubly linked list is empty\n");
    }
    while(header!=NULL)
    {
        printf("%d->",header->val);
        header=header->next;
    }
    printf("NULL");
}
int main()
{
    dl *head=NULL;
    int ch,ele,target;
    while(1)
    {
    printf("\n 1.Creation 2.Insertafter 3.Insertbefore 4.Deletion 5.Display 6.Exit");
    printf("\n Enter the choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
         printf("enter the element : ");
         scanf("%d",&ele);
         create(&head,ele);
         break;
        case 2:
          printf("Enter the target : ");
          scanf("%d",&target);
          printf("Enter the value to insert : ");
          scanf("%d",&ele);
          insert_after(&head,target,ele);
          break;
        case 3:
          printf("Enter the target : ");
          scanf("%d",&target);
          printf("Enter the value to insert : ");
          scanf("%d",&ele);
          insert_before(&head,target,ele);
          break;
        case 4:
          printf("Enter the target : ");
          scanf("%d",&target);
          deletion(&head,target);
          break;
        case 5:
          display(head);
          break;
        case 6:
           return 0;
    }
    }
}