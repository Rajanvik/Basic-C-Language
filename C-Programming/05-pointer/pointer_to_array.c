//  ::  What is pointer to array 

// Ans-pointer to array ka used karke pointer ki help se one array element access karna that is called pointer to array 

// :: Example

#include<stdio.h>

int main()
{
	int a[3]={7,4,9};
	int *p=a;
	printf("\nthe array of element ");
	for(int i=0;i<3;i++)
	{
		printf("%d\t",*p);
		p++;
	}
	return 0;
}