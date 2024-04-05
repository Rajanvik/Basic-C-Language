#include<stdio.h>

int main()
{
	int i=1,N;

	scanf("%d",&N);
	printf("print numbers from 1 to %d \n",N);

    while(i<=N)
	{
		printf("%d ",i);
		i++;
	}

	return 0;
}