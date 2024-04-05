#include<stdio.h>

int main()
{
  int size;
  printf("enter a size of array :");
  scanf("%d",&size);

  int arr[size];
  printf("enter array element :\n");
  
  for(int i=0;i<size;i++)
  {
    printf("arr[%d]=",i);
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<size/2;i++) 
  {
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
  }

  printf("reverse array element: ");
  
  for(int i=0; i<size; i++)
  {
    printf("%d,",arr[i]);
  }
    return 0;
}