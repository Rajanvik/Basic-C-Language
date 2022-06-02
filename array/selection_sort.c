#include<stdio.h>

int main()
{
   int size,min,temp;
   printf("enter a size of array : ");
   scanf("%d",&size);

   int arr[size];
   printf("enter a array element \n");

   for(int i=0;i<size;i++)
   {
	   printf("array[%d]=",i);
	   scanf("%d",&arr[i]);
   }

   for(int i=0;i<size-1;i++)
   {
	   min=i;

	   for(int j=i+1;j<size;j++)
	   {
		   if(arr[j]<arr[min])
		     min=j;
	   }
       temp=arr[i];
	   arr[i]=arr[min];
	   arr[min]=temp;
   }

   printf("selection sort : ");
   

   for(int i=0; i<size; i++)
   {
    printf("%d,",arr[i]);
   }

  return 0;
}
