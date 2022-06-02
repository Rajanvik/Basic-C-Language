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

	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}

    printf("sum of array element equal to :%d ",sum);

	return 0;
}