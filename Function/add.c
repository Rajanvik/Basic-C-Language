#include<stdio.h>

int sum(int a,int b);

int main()
{
	int a,b,c;
	printf("\nenter a first number : ");
	scanf("%d",&a);
	printf("\nenter a second number : ");
	scanf("%d",&b);
	c=sum(a,b);
	printf("\nsum is %d",c);
    return 0;
}

int sum(int x,int y)
{
	int result;
	result=x+y;
	return result;
}