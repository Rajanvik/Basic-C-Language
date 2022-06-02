#include<stdio.h>
#include<stdlib.h>

int main()
{    
	int i=65,j=97,N,K;
	printf("N = ");
	scanf("%d",&N);
	printf("K = ");
    scanf("%d",&K);

	printf("%c is an UpperCase character\n",N);

    while(i<=N)
	{
       printf("%c ",i);
	   i++;
	}
    printf("\nAll Above are UpperCase character");

    printf("\n--------------------------------------------------------------");


	printf("\n%c is an LowerCase character",N);

    while(j<=K)
	{
       printf("\n%c ",j);
	   j++;
	}
    printf("\nAll Above are LowerCase character");

    return 0;
}