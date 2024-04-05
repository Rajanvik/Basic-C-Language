#include<stdio.h>

int main()
{
  int size,temp;
  printf("enter size of array :");
  scanf("%d",&size);

  int arr[size];
  printf("enter array element :\n");
  
  for(int i=0;i<size;i++)
  {
    printf("arr[%d]=",i);
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<size-1;i++)
  {
	  for(int j=0;j<size-1-i;j++)
	  {
		  if(arr[j]>arr[j+1])
		  {
			    temp=arr[j];
			    arr[j]=arr[j+1];
				  arr[j+1]=temp;
		  }
	  }
  }

  printf("bubble sort of array:");
  
  for(int i=0; i<size; i++)
  {
           printf("%d,",arr[i]);
  }

  return 0;

}