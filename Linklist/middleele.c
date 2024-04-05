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
void find_mid(sl **head)
{
    sl *current;
    current=*head;
    // printf("%d",current);
    int c = 0;
    while (current->next != NULL)
    {
        c++;
        current = current->next;
    }
    current = *head;
    for(int i = 1; i <=c/2; i++)
    {
        current = current->next;
    }
    printf("%d",current->value);
}
int main()
{
   sl *head;
   head = NULL;
   int n=0,num,c;
   char ch;
   int ar[100];

   while(1)
   {
      printf("\n1. create 2. finMid 3. display 4. exit");
      printf("\nEnter a choice: ");
      scanf("%d",&c);
      switch (c)
      {
        case 1: while(1)
                {
                    scanf("%d",&num);
                    ar[n] = num;
                    n++;
                    scanf("%c",&ch);
                    if(ch == '\n')
                    break;
                }
                for(int i = 0; i<n ; i++)
                {
                    create(&head,ar[i]);
                }
                break;
        case 2: find_mid(&head);
                break;
        case 3: display(head);
                break;
        case 4: return 0;
      }
   }
   return 0;
}

// slow = slow->next
// fast = fast->next->next