#include<stdio.h>

int areaofsquare(int a);

int main()
{
	int a,j;
    printf("enter the value of side  : ");
	scanf("%d",&a);
	j=areaofsquare(a);
	printf("area of square is %d",j);
    return 0;
}

int areaofsquare(int n)
{
   int c;
   c=n*n;
   return c;
}