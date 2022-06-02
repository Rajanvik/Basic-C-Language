#include<stdio.h>

int main()
{
    int size,max=0;
	printf("enter array of size : ");
	scanf("%d",&size);

	int arr[size];
	printf("enter array of element :\n");

	for(int i=0;i<size;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}
    for(int i=0;i<size;i++)
    {
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
    printf("\nmaximum number from array is : %d ",max);

	int min=max;
	
	for(int i=0;i<size;i++)
    {
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}

	printf("\nminimum number from array is : %d ",min);

	return 0;
}