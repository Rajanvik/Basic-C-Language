/*

#include<stdio.h>

int main()
{
	printf(" %d\n",6%4);
	printf("%d\n",-6%4);

    printf(" %d\n",2*2);
    printf(" %d\n",2.0*2);     //error output-->because ye float hoga humne integer diye hai
	printf(" %f\n",2.0*2);     //correct
	printf(" %d\n",4.0*2.0);   //error output-->because ye float hoga humne integer diye hai
	printf(" %f\n",4.0*2.0);   //correct

    return 0;
}

*/

#include<stdio.h>

int main()
{
	int a = 1.999999;
	int a = (int) 1.9999;
	printf("%d",a);

    return 0;
}

