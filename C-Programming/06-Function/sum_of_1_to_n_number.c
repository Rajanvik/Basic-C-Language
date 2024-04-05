#include<stdio.h>

void sumnumber(int n);

int main()
{
	int n;
	printf("enter add upto number : ");
    scanf("%d",&n);
	sumnumber(n);
    return 0;
}
void sumnumber(int n)
{
	int sum=0;

	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}	
	printf("sum of up to %d is : %d",n,sum);
}