#include<stdio.h>

int f(int n);

int main()
{
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	int ans=f(n);
	printf("power of 2^%d is = %d",n,ans);
	return 0;
}
int f(int n)
{
	// base condition 
	if(n==0)
	  return 1;
	else
	{
		int small=f(n-1);
		int large=2*small;

		return large;
	}

}
