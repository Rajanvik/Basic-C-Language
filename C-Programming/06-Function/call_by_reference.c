#include<stdio.h>

void swap(int *a,int *b);

int main()
{
	int a,b;
	printf("\na=");
	scanf("%d",&a);
    printf("\nb=");
	scanf("%d",&b);
	swap(&a,&b);
	printf("\nMain Function    : a=%d  b=%d",a,b);
	return 0;
}
void swap(int *a,int *b)
{
	int temp=*a;
	     *a=*b;
		 *b=temp;
	printf("\nCalling Function : a=%d  b=%d",*a,*b);
}
