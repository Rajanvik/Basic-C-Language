#include<stdio.h>

int main()
{
    int size,pos=0,neg=0,zero=0;

	printf("enter array of size : ");
	scanf("%d",&size);

	int arr[size];
	printf("enter a array element :\n");

	for(int i=0;i<size;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}

    for(int i=0;i<size;i++)
	{
		if(arr[i]>0)
		{
		   pos++;
		}
		else if(arr[i]<0)
		{
			neg++;
		}
		else
		{
           zero++;
		}
	}

	printf("\npositive number repeated  %d time",pos);
	printf("\nnegative number repeated  %d time",neg);
	printf("\nzero     number repeated  %d time",zero);

	return 0;
}

