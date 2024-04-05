#include<stdio.h>

int sum(int n);

int main()
{
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	sum(n);
	printf("the sum of %d natural no is  %d",n,sum(n));
	return 0;
}
int sum(int n)
{
	if(n==1)
	{
        return 1 ;
	}
	return sum(n-1)+n;
}