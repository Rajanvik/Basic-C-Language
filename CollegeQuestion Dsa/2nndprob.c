#include <stdio.h>
#include <stdlib.h>

void nqueen(int a[],int row,int col);
int check(int a[],int r,int c);
void display(int a[]);
int n,c=1;

int main() 
{
	int i,k;
	printf("\nhow many no. of queens: ");
	scanf("%d",&n);
	int b[n];
	
	for(i=1;i<=n;i++)
		b[i]=0;
	
	printf("\nhow many no of feasibile solution: ");
	scanf("%d",&k);
	printf("\nenter solluton :");
	for(i=1;i<=k;i++)
		scanf("%d",&b[i]);
	printf("\n\n");
	printf("list of iteration\n");
	
	
	for(i=1;i<=k;i++)
	{
		if(!check(b,i,b[i]))
		{
				printf("you entered wrong place..\n");
				printf("check it and try again\n");
				return 0;
		}
	}

	nqueen(b,k+1,0);
	return 0;
}

void nqueen(int a[],int row,int col)
{
	
	int flag=0,i;
	for(i=1;i<row;i++)
	printf("%d ",a[i]);
	printf("\n");
	if(row>n)
	{
		printf("\n\n\n\n");
		display(a);
		return ;
	}
	for(i=col+1;i<=n;i++)
	{
		if(check(a,row,i)==1) 
		{
			flag=1;
			a[row]=i;
			break;
			
		}
	}
	if(flag!=1)
	{
		a[row]=0;
		printf("backtrack %d:\n",c++);
		nqueen(a,row-1,a[row-1]);        
	}
	else
		nqueen(a,row+1,0);
	
}

int check(int a[],int r,int c)
{
	int i;
	for(i=1;i<r;i++)
	{
		if(a[i]==c) 
			return 0;
	}
	for(i=1;i<r;i++)
	{
		if(a[i]+i==r+c || a[i]-i==c-r)  
			return 0;
	}
	return 1;
}

void display(int a[])
{
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
		{
			if(a[i]==j)
			printf("Q ");
			else
			printf("* ");
		}
		printf("\n");
	}
}