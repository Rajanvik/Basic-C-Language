#include<stdio.h>
#include<stdlib.h>

typedef struct bstnode
{
    int data;
    struct bstnode *left,*right;
}bstnode;

bstnode *create(bstnode *root1,int item)
{
    if(root1==NULL)
    {
        bstnode *newnode=(bstnode*)malloc(sizeof(bstnode));
        newnode->data=item;
        newnode->left=NULL; 
        newnode->right=NULL; 
        return newnode;
    }
    if(item<root1->data)
        root1->left=create(root1->left,item);
    else if(item>root1->data)
        root1->right=create(root1->right,item);
    return root1; 
}

void inorder(bstnode *root1)
{
    if(root1==NULL)
        return;
    inorder(root1->left);
    printf("%d->",root1->data);
    inorder(root1->right);
}

void postorder(bstnode *root1)
{
    if(root1==NULL)
        return;
    postorder(root1->left);
    postorder(root1->right);
    printf("%d->",root1->data);
}

void preorder(bstnode *root1)
{ 
    if(root1==NULL)
        return;
    printf("%d->",root1->data);
    preorder(root1->left);
    preorder(root1->right);
}

int main()
{
    int n,num;
    bstnode *root=NULL;
    printf("Enter the number of elements:-\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the element:-\n");
        scanf("%d",&num);
        root=create(root,num);
    }
    printf("\nyour binary search tree in preorder fashion is:-\n");
    preorder(root);
    printf("\nyour binary search tree in inorder fashion is:-\n");
    inorder(root);
    printf("\nyour binary search tree in postorder fashion is:-\n");
    postorder(root);
}