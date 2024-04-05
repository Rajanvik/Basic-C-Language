#include<stdio.h>

int fibonacci(int n);

int main()
{
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	fibonacci(n);
	printf("%d",fibonacci(n));

	return 0;
}
int fibonacci(int n)
{
	if(n==0)
	{
       return 0;
	}
	if(n==1)
	{
       return 1;
	}
	return fibonacci(n-1)+fibonacci(n-2);
}
