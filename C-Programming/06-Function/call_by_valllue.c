/*

#include<stdio.h>

void dis(int a);

int main()
{
	int x=10;
	printf("\nthe value of a  main   function is %d",x);
	dis(x);
	return 0;
}

void dis(int a)
{
    a=a+10;
    printf("\nthe value of a calling function is %d",a);
}

*/

#include<stdio.h>

void swap(int a,int b);

int main()
{
	int a,b;
	printf("\na=");
	scanf("%d",&a);
    printf("\nb=");
	scanf("%d",&b);
	swap(a,b);
	printf("\nMain Function    : a=%d  b=%d",a,b);
	return 0;
}
void swap(int a,int b)
{
	int temp=a;
	    a=b;
		b=temp;
		printf("\nCalling Function : a=%d  b=%d",a,b);
}