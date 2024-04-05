#include<stdio.h>  
#include<stdlib.h>

typedef struct node  
{  
    int data;  
    struct node *left, *right;  
}bt;  
bt *create()  
{  
   bt *newnode;  
   int data,choice;  
   newnode = (bt *)malloc(sizeof(bt));   
   if(choice == -1)  
   {  
      return 0;  
   }  
   else  
   {  
        printf("Enter the data:");  
        scanf("%d",&data);  
        newnode->data = data;  
        printf("Enter the left child of %d ", data);  
        newnode->left = create();  
        printf("Enter the right child of %d ", data);  
        newnode->right = create();  
        return newnode;   
   }  
} 
void display(bt *root) // displaying the nodes!
{
   while(root != NULL)
   {
        printf("%d \n", root->data);
        print(root->right);
   }
}
int main()  
{  
    struct node *root; 
    root = NULL; 
    int ch;
    while(1)
    {
        printf("\n(1) new node , (2) press -1 exit (3) Display");  
        printf("\nEnter your choice : ");  
        scanf("%d",&ch);   
        switch (ch)
        {
            case 1: root = create();
                    break;
            case 2: display(root);
                    break;
        }
    }
    return 0;
}  

// Output :         10
//               /      \
//              20       30
//             /  \     /
//           40    50  60