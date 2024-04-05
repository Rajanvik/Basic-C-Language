#include<stdio.h>

int main()
{
	int i=1,N;

	printf("N =  ");
	scanf("%d",&N);

	printf("ODD numbers from 1 to %d\n",N);

    while(i<=N)
	{
		if(i%2 != 0)
		{
			printf("%d ",i);
		}

		i++;
	}

	return 0;

}