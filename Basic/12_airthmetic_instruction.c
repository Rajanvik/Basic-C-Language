#include<stdio.h>
#include<math.h>

int main()
{
	int a = 4,b =2;
	int sum = a + b;
	int multiply = a * b;
	int x,y = a * b; // only y me a*b ka value store huya hai x ek new  variable 

    int power = pow(a,b);
	printf("%d",power);

	return 0; 
}


// single variable on the LHS


/*

Valid                         Invalide
a=b+c                         b+c=a
a=b*c                         a=bc
a=b/c                         a=b^c


Note--->pow(x,y) for x to the power y

*/