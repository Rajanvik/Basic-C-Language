#include<stdio.h>

int evenodd(int n);

int main()
{
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
    evenodd(n);
	return 0;
}

int evenodd(int n)
{
	if(n%2==0)
	{
		printf("%d number is Even",n);
	}
	else
	{
		printf("%d number is Odd",n);
	}
}