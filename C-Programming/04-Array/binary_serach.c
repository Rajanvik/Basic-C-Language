#include<stdio.h>

int main()
{
  int i=0,size,mid,lr=0,c=0,item;
  printf("enter a size of array :");
  scanf("%d",&size);

  int arr[size];
  printf("enter array element :\n");
  
  while(i<size)
  {
    printf("arr[%d]=",i);
    scanf("%d",&arr[i]);
	  i++;
  }

  int up = size;

  printf("enter a search item : ");
  scanf("%d",&item);

  while(lr<=up)
  {
	  mid=(lr+up)/2;

	  if(arr[mid]==item)
	  {
		  c=1;
		  break;
	  }
	  else if(arr[mid]<item)
	        {
		         lr=mid+1;
	        }
	  else
	        {
		         up=mid-1;
			    }
  }
  
  if(c==1)
  {
	  printf("item found with location %d",mid);
  }
  else
  {
	  printf("item not found ");
  }

  return 0;
}
