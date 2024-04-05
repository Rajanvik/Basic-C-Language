//03. Get Element At Index

#include<stdio.h>

int main()
{
    int size;
    printf("enter a size : ");
    scanf("%d",&size);
    int a[size];
    printf("enter a array element :\n");
    for(int i=0;i<size;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&a[i]);
    }
    int index,i; 
    printf("enter a index : ");
    scanf("%d",&index);
    printf("the array element is : ");
    for(int i=0;i<size;i++)
    {
        if(index==i)
        {
           a[index]=a[i];
        }
    }
    printf(" Element %d At Index %d",a[index],index);
    return 0;
}