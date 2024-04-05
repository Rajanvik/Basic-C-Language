#include<stdio.h>

int countOdd(int arr[],int size);

int main()
{
    int size;

	printf("enter array of size : ");
	scanf("%d",&size);

	int arr[size];
	printf("enter a array element :\n");

	for(int i=0;i<size;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}

	countOdd(arr,size);
	printf("\nOdd numbers repeated %d times",countOdd(arr,size));
	return 0;
}
int countOdd(int arr[],int size)
{
	int count=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2 != 0)
		{
			count++;
		}
	}
	return count;
}
