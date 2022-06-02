#include<stdio.h>

int main()
{
	int fact=1,i=1,N;

	scanf("%d",&N);

	printf("factorial of %d\n",N);

	do
	{
       fact=fact*i;
	   printf("%d",i);
	   i++;
	}
	while(i<=N);

    printf("=%d",fact);

    return 0;
}