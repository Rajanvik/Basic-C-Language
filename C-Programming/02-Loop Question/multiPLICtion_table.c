#include<stdio.h>

int  main()
{
	int multi,N;

	printf("N = " );
	scanf("%d",&N);

	printf("multiplication table of %d\n",N);

	for(int i=1; i<=10;i++)
	{
		multi=N*i;
		printf("%d\n",multi);
	}

	return 0;
}