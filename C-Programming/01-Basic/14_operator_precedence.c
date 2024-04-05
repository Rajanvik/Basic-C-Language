/*

::operator precedence order
 
(1)    *,/,%
        V
(2)    +,-
        V
(3)     =


:: Associativity (for same precedence)

-->Left to Right

*/

#include<stdio.h>

int main()
{
	int x =4 + 9 * 10;
	int g =4 * 3 / 6 * 2;
	printf("%d\n", x);
	printf("%d\n", g);


    int b = 5 * 2 - 2 * 3;
	int c = 5 * 2 / 2 * 3;
	int d = 5 * (2 / 2) * 3;
	int e = 5 + 2 / 2 * 3;

	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);

	return 0;
}