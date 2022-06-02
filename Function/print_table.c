#include<stdio.h>

int printtable(int n);

int main()
{
     int n;
	 printf("enter a table : ");
	 scanf("%d",&n);
	 printf("the table of %d is \n",n);
	 printtable(n);
	 return 0;
}

int printtable(int x)
{
	for(int i=1;i<=10;i++)
	{
		printf("%d\n",x*i);
	}
}