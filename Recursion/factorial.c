#include<stdio.h>

int fact(int n);

int main()
{
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	int ans=fact(n);
	printf("factorial of %d is = %d",n,ans);
	return 0;
}
int fact(int n)
{
	// base condition 
	if(n==0)
	  return 1;
	else
	{
		int small=fact(n-1);
		int large=n*small;

		return large;
	}

}
