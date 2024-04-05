#include<stdio.h>
#include<stdlib.h>

typedef struct singlelinkedlist
{
    int value;
    struct singlelinkedlist *next;
}sl;

void create(sl **head,int ele)
{
   sl *current,*p;     //declaring nodes

   if (*head == NULL)
   {
        //allocating memory first node
        *head = (sl *)malloc(sizeof(sl));
        //assigning values to first node
        (*head)->value = ele;
        // printf("\nfirst value = %d\n",(*head)->value);
        (*head)->next = NULL;
        // printf("\n%d",*head);
   }
   else
   {
        current = *head;
        // printf("\n%d",current);

        while(current->next != NULL)
        {
            current = current->next;
            // printf("\n%d",current);
        }
        //allocating memory for each node
        p = (sl*)malloc(sizeof(sl));
        // printf("\np = %d",p);
        //assigning values to each node
        p->value = ele;
        // printf("\nele = %d",ele);
        //connecting each nodes. head->(current->next)->Null
        current->next = p; 
        // printf("\np = %d",p);
        // printf("\ncurrent = %d\n",*current->next);
        p->next = NULL;
    }
}
void display(sl *head)
{
    if(head == NULL)
    {
       printf("\nlist is empty");
    }
    else
    {
        //till the node becomes null, printing each nodes data
        printf("\n\t");
        while (head != NULL)
        {
            printf("%d->",head->value);
            head = head->next;
        }
        printf("NULL\n");
    }
}
void insert_after(sl **head,int target)
{
    sl *newnode,*ptr,*prevptr;
    newnode = (sl *)malloc(sizeof(sl));
    printf("Enter a element : ");
    scanf ("%d",&newnode->value);
    prevptr = ptr = *head;

    while ((prevptr->value != target) &&(ptr != NULL))
    {
        prevptr = ptr;
        ptr = ptr->next;
    } 
    prevptr->next = newnode;
    newnode->next = ptr;
}
void insert_before(sl **head,int target)
{
    sl *newnode,*ptr,*prevptr;
    newnode = (sl *)malloc(sizeof(sl));
    printf("Enter a element : ");
    scanf ("%d",&newnode->value);
    prevptr = ptr = *head;

    while ((ptr->value != target) &&(ptr != NULL))
    {
        prevptr = ptr;
        ptr = ptr->next;
    } 
    prevptr->next = newnode;
    newnode->next = ptr;
}
void delete(sl **head,int target)
{
    sl *current,*prev;
    current = *head;
    printf("current = %d",current);
    
    if(current->value == target)      // delete only first postion element 
    {
        // printf("current->value : %d",current->value);
        // printf("target value : %d",target);
        *head = current->next;
        free(current);
    }
    else
    {
         while (current->value != target)
        {
            printf("current->value : %d",current->value);
            printf("target value : %d",target);
            prev = current;
            current = current->next;
        }
        if(current->next != NULL)
        {
            prev->next = current->next;
            free(current);
        }
        else
        {
            prev->next = NULL;
            free(current);
        }
    }

}
int main()
{
   sl *head;
   head = NULL;
   int ele,target,ch;

   while(1)
   {
       printf("\n1. create   2. display   3. insert_after\n4. insert_before   4. delete  5. exit");
       printf("\n\n\tEnter a choice: ");
       scanf("%d",&ch);

       switch (ch)
       {
        case 1: printf("\nenter element : ");
                scanf("%d",&ele);
                create(&head,ele);
                break;

        case 2: display(head);
                break;

        case 3: printf("\n  Enter the target value : ");
                scanf("%d",&target);
                insert_after(&head,target);
                break;

        case 4: printf("\n  Enter the target value : ");
                scanf("%d",&target);
                insert_before(&head,target);
                break;

        case 5: printf("\n  Enter the target value : ");
                scanf("%d",&target);
                delete(&head,target);
                break;

        case 6: return 0; 
       }
   }
   return 0;
}
