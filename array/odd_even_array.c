#include<stdio.h>

int main()
{
    int size,sum=0;
	printf("enter array of size : ");
	scanf("%d",&size);

	int arr[size];
	printf("enter array of element :\n");

	for(int i=0;i<size;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}
     
    printf("\nEven element in array : ");

	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		printf("%d,",arr[i]);
	}
    
	printf("\nodd  element in array : ");

	for(int i=0;i<size;i++)
	{
		if(arr[i]%2!=0)
		printf("%d,",arr[i]);
	}

	return 0;
}