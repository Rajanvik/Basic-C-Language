#include<stdio.h>

int sumofdigit(int n);

int main()
{
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	sumofdigit(n);
	printf("%d",sumofdigit(n));
	return 0;
}
int sumofdigit(int n)
{
	if(n==0)
	{
		return 0; 
	}
	else
	{
       return (sumofdigit(n/10)+n%10);
	}
	
}