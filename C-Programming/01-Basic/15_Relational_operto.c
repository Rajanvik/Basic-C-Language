/*

(1) ==      One equal print 
     |
     |
     V
Eg a==b ka matlab a=b
Eg a=b;  b ka value a me assign ho gaya hai

(2) >,>=    greater or greater equal to

(3) <,<=    less than or less than equal tp

(4) !=      not equal to

*/


#include<stdio.h>

int main()
{
	printf("%d\n",4 == 4);    // True --> {1} {2,3,-1,-5}
	printf("%d\n",4 == 3);   //  False --> { 0 }

	printf("%d\n",4 > 4);   //  False 
    printf("%d\n",4 >= 4);  //  True 
	printf("%d\n",4 > 3);   //  True 
	printf("%d\n",5 > 4);   //  False

	printf("%d\n",4 < 4);    //  False
	printf("%d\n",4 < 3);    //  False
	printf("%d\n",3 < 4);    //  True
	printf("%d\n",4 <= 4);   //  True

	printf("%d\n",4 != 4);    //  False
	printf("%d\n",4 != 3);    //  True

	return 0;
}
