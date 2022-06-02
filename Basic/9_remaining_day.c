#include<stdio.h>

int main()
{
	int n,rem,month;
	printf("enter a day : ");
	scanf("%d",&n);

    month=n/30;
    printf("%d month \n",month);

	rem=n%10;
	printf("remaining day is : %d",rem);

    return 0;

}