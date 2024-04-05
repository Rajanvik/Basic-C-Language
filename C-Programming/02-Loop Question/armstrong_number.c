#include<stdio.h>

int main()
{
	int i,n,r,p,sum=0;
	printf("enter a number : ");
	scanf("%d",&n);
	i=n;
	while(n!=0)
	{
		r=n%10;
		p=r*r*r;
		sum=sum+p;
		n=n/10;
	}
	if(sum==i)
	    printf("armstrong number\n");
	else
	    printf("not armstrong number\n");
    return 0;
}