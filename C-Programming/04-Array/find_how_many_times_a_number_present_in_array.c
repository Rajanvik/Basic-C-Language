#include<stdio.h>

int main()
{
    int size,count=0;

	printf("enter array of size : ");
	scanf("%d",&size);

	int arr[size];
	printf("enter a array element :\n");

	for(int i=0;i<size;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}

	int n;
    printf("enter a element you want to search : ");
	scanf("%d",&n);

	for(int i=0;i<size;i++)
	{
		if(arr[i]==n)
		count++;
	}

	printf("%d element repeat %d time",n,count);

	return 0;
}