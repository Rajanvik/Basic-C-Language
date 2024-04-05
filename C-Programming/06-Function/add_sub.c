#include<stdio.h>

int add(int a,int b);
int sub(int a,int b);

int main()
{
	int a,b;
	printf("enter a two numbe : ");
	scanf("%d%d",&a,&b);
	add(a,b);
	sub(a,b);
	return 0;
}

int add(int a,int b)
{
	printf("addtion=%d\n",a+b);
}
int sub(int a,int b)
{
	printf("subtarction=%d\n",a-b);
}