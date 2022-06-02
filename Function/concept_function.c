/*
::  No Argument   and    No Return Value 

#include<stdio.h>

void sum();            //Function declaration
void main()
{
	sum();             //Function calling
}
void sum()             //Function Defintion 
{
	int a,b,c;
	printf("enter a two number :\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Addition :  %d",c);
}

::  No Argument   and    Return Value 

#include<stdio.h>

int sum();            //Function declaration
void main()
{
	int s;            
	s=sum();
	printf("Addtion :  %d",s);
}
int sum()             //Function Defintion 
{
	int a,b,c;
	printf("enter a two number :\n");
	scanf("%d%d",&a,&b);
    c=a+b;
	return c;
}


::  Argument   and    No Return Value 

#include<stdio.h>

void sum(int,int);            //Function declaration
void main()
{
	int m,n;            
    sum(m,n);
}
void sum(int,int)             //Function Defintion 
{
	int a,b,c;
	printf("enter a two number :\n");
	scanf("%d%d",&a,&b);
    c=a+b;
	printf("Addition :  %d",c);
}

*/

::  Argument   and    Return Value 

#include<stdio.h>

int sum(int,int);            //Function declaration
void main()
{
	int m,n,s;            
	s=sum(m,n);
	printf("Addtion :  %d",s);
}
int sum(int,int)             //Function Defintion 
{
	int a,b,c;
	printf("enter a two number :\n");
	scanf("%d%d",&a,&b);
    c=a+b;
	return c;
}