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
   }
   else
   {
        current = *head;

        while(current->next != NULL)
        {
            current = current->next;
        }
        //allocating memory for each node
        p = (sl*)malloc(sizeof(sl));
        //assigning values to each node
        p->value = ele;
        //connecting each nodes. head->(current->next)->Null
        current->next = p;
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
void insert_before(sl **head,int target,int ele)
{
    sl *current,*p,*prev;
    current = *head;

    if (current->value == target)
    {
            p = (sl *)malloc(sizeof(sl));
            p->value = ele;
            p->next = current;
            *head = p;
    }
    else
    {
        while (current->value != target)
        {
            prev = current;
            current = current->next;
        }
        p = (sl *)malloc(sizeof(sl));
        p->value = ele;
        prev->next = p;
        p->next = current;
    }
}
void insert_after(sl **head,int target,int ele)
{
    sl *current,*p;
    current = *head;

    while (current->value != target)
        {
            current = current->next;
        }
    if (current->next != NULL)
    {
        p = (sl *)malloc(sizeof(sl));
        p->value = ele;
        p->next = current->next;
        current->next = p;
    }
    else
    {
        p = (sl *)malloc(sizeof(sl));
        p->value = ele;
        current->next = p;
        p->next = NULL;
    }
}
void delete(sl **head,int target)
{
    sl *current,*prev;
    current = *head;
    
    if(current->value == target)
    {
        *head = current->next;
        free(current);
    }
    else
    {
         while (current->value != target)
        {
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
       printf("\n1.create 2. display 3. insert_before 4. insert_after 5. delete 6. exit");
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
                printf("\n  Enter the element : ");
                scanf("%d",&ele);
                insert_before(&head,target,ele);
                break;

        case 4: printf("\n  Enter the target value : ");
                scanf("%d",&target);
                printf("\n  Enter the element : ");
                scanf("%d",&ele);
                insert_after(&head,target,ele);
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