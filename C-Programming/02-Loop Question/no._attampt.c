#include<stdio.h>

int main()
{
	int n,s,i,a;
	i=1;
	a=0;
	s=0;

	while(i<=3)
	{
		printf("\n enter a number :\t");
		scanf("%d",&n);

		if(n>=0)
		{
			s=s+n;
			a++;
		}
		else
		{
			a++;
			printf("sorry negative number!!");
			continue;
		}
		i++;
	}
	printf("\n the sum is :\t%d",s);
	printf("\n number of attempts::\t%d",a);
	return 0;
}