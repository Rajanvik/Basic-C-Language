#include<stdio.h>

int main()
{
  int size;
  printf("enter size of array :");
  scanf("%d",&size);

  int arr[size];
  printf("enter array element :\n");
  
  for(int i=0;i<size;i++)
  {
    printf("arr[%d]=",i);
    scanf("%d",&arr[i]);
  }

  int temp1=size/2;

  for(int i=0;i<temp1/2;i++) 
  {
        int temp=arr[i];
        arr[i]=arr[temp1-i-1];
        arr[temp1-i-1]=temp;
  }

  printf("reverse only first half of the element: ");
  
  for(int i=0; i<size; i++)
  {
    printf("%d,",arr[i]);
  }
    return 0;
}