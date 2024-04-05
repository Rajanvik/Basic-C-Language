#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left,*right;
}bt;

bt *create(){
    bt *newnode;
    newnode = (bt *)malloc(sizeof(bt));
    int ch,x;
    printf("\n(1) new node , (2) press -1 exit");  
    printf("\nEnter your choice : "); 
    scanf("%d",&ch); 
    if (ch == -1){
        return 0;
    }
    else{
        printf("Enter Data = ");
        scanf("%d",&x);
        newnode->data = x;
        printf("Enter the left child of %d ",x);  
        newnode->left = create();
        printf("Enter the right child of %d ",x);  
        newnode->right = create();
    }   

}
int main(){
    struct node *root;
    root = NULL;
    root = create();

    return 0;
}

// Output :         10
//               /      \

//              20       30
//             /  \     /
//           40    50  60