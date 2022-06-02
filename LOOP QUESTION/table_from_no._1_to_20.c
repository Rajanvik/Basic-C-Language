#include<stdio.h>

int  main()
{
	int multi,N;

	printf("N = " );
	scanf("%d",&N);

	printf("multiplication table of %d\n",N);

    for(int i=1;i<=N;i++)
	{
	   printf("multiplication table of %d\t\n",i);
	   for(int j=1; j<=10;j++)
	    {
		    multi=i*j;
		    printf("%d\n",multi);
	    }
	}

	return 0;
}