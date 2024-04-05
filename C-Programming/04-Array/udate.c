#include<stdio.h>

int main()
{
  int size,pos,element;
  printf("enter a size of array :");
  scanf("%d",&size);

  int arr[size];
  printf("enter array element :\n");
  
  for(int i=0;i<size;i++)
  {
    printf("arr[%d]=",i);
    scanf("%d",&arr[i]);
  }

  printf("enter the postion value update element : ");
  scanf("%d",&pos);

  printf("enter the element to update : ");
  scanf("%d",&element);

  arr[pos]=element;

  printf("after updating the element,the array element are\n");

  for(int i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }

  return 0;

}
