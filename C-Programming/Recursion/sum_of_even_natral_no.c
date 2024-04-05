// // How to sum of even natural number usingg a recursion\

// #include<stdio.h>

// int sumeven(int n);

// int main()
// {
// 	int n;
// 	printf("enter a even number : ");
// 	scanf("%d",&n);
// 	sumeven(n);
// 	printf("sum of even is = %d",sumeven(n));
// 	return 0;
// }
// int sumeven(int n)
// {
// 	if(n==0)
// 	{
// 		return 0;
// 	}
// 	else 
// 	{
// 		return sumeven(n-2)+n;
// 	}

// }



// How to sum of odd natural number usingg a recursion

#include<stdio.h>

int sumodd(int n);

int main()
{
	int n;
	printf("enter a odd number : ");
	scanf("%d",&n);
	sumodd(n);
	printf("sum of odd is = %d",sumodd(n));
	return 0;
}
int sumodd(int n)
{
	if(n==1)
	{
		return 1;
	}
	else 
	{
		return sumodd(n-2)+n;
	}
}