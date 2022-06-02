#include<stdio.h>

int main()
{
  int size,postion=0,item;
  printf("enter a size of array :");
  scanf("%d",&size);

  int arr[size];
  printf("enter array element :\n");
  
  for(int i=0;i<size;i++)
  {
    printf("arr[%d]=",i);
    scanf("%d",&arr[i]);
  }

  printf("enter element to be serch : ");
  scanf("%d",&item);

  for(int i=0;i<size;i++)
  {
	  if(arr[i]==item)
	  {
         postion=i;
		     break;
	  }
    
  }
  if(postion>0)
  {
	  printf("Linear search success full item found at %d index",postion);
  }
  else
  {
	  printf("Linear search unsucceess full");
  }

  return 0;

}
