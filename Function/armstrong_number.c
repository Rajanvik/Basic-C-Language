#include<stdio.h>

void armstrong(int n);

int main()
{
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	armstrong(n);
	return 0;
}

void armstrong(int n)
{
	int r,z,sum=0,temp;

	temp=n;

	while(n>0)
  {	
	r=n%10;
	z=r*r*r;
	sum=sum+z;
	n=n/10;
  }
  if(temp==sum)
  {
	printf("armstrong number is %d",temp);
  }
  else 
  {
	printf("not armstrong number is %d",temp);
  }

}