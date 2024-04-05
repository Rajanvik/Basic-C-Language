#include<stdio.h>

int palindrome(int n,int sum);  

int main()
{
	int n,p;
	printf("enter a number : ");
	scanf("%d",&n);
	p=palindrome(n,0);           // n or 0 are argument
	if(p==n)
	{
		printf("palindrome");
	}
	else 
	{
		printf("not palindrome");
	}
	return 0;
}
int palindrome(int n,int sum)     // n,sum are parameters
{
	if(n==0)
	{
		 return sum;
	}
	else
	{
		sum=sum*10+n%10;		
		return palindrome(n/10,sum);
	}
}