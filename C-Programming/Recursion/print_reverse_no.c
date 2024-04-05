#include<stdio.h>

int reversenum(int n);

int main()
{
	int n;
    printf("enter a number : ");
	scanf("%d",&n);
	printf("The reverse Number is : ");
	reversenum(n);
    return 0;
}
int reversenum(int n)
{
	if(n==0)
	{
		 return 0;
	}
	else
	{
		printf("%d",n%10);
		return reversenum(n/10);
	}
}
