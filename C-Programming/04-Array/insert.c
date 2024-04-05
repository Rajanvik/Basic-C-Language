#include<stdio.h>

int main()
{
	int size,pos,element;
	printf("enter a size : ");
	scanf("%d",&size);
	int arr[size];
	printf("enter a array element \n");
	for(int i=0;i<size;i++)
	{
		printf("arrr[%d]",i);
		scanf("%d",&arr[i]);
	}
	printf("enter a postion : \n");
	scanf("%d",&pos);
	printf("enter a element : \n");
	scanf("%d",&element);
	arr[pos]=element;
	printf("the array element is \n");
	for(int i=0;i<size+1;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
