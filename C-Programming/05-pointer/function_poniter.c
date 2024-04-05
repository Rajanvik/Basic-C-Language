#include<stdio.h>

int sum(int,int);

int main()
{
	int a,b;
	printf("enter a two number :\n"); 
	scanf("%d%d",&a,&b);
    // int (*ptr)(int,int)=&sum; // Function Pointer
    // (*ptr)(a,b);
    // printf("\nThe Sum of two no. is %d",(*ptr)(a,b));
	int (*ptr)(int,int)=sum;   
    ptr(a,b);      // *,& are optional in this case 
	printf("\nThe Sum of two no. is %d",ptr(a,b));
	return 0;
}
int sum(int a,int b)
{
	return a+b;
}