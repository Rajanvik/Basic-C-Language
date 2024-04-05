#include<stdio.h>

int isprime(int n);
int twinsprime(int n,int m);

int main()
{
	int n,m;
	printf("enter a 1st number : ");
	scanf("%d",&n);
	printf("enter a 2nd number : ");
	scanf("%d",&m);
	if(twinsprime(n,m))
	{
		printf("twins prime");
	}else{
		printf("not twins prime");
	}
	return 0;
}
int isprime(int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		return 1;
	}
	return 0;
}
int twinsprime(int n,int m)
{
	if (isprime(n)&&isprime(m)&&isprime(m-n))
	{
		return 1;
	}
	return 0;
}