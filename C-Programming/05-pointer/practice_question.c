// int arr={1,2,3,4,5}
// for the given array,what will the following give ?
// (a) *(arr+2)    // 3
// (b) *(arr+5)   //  0

#include<stdio.h>

int main()
{
	int arr[]={1,2,3,4,5};
    int *p=&arr[0];
	printf("%d\n",*(p+2));
    printf("%d\n",*(p+5));

    return 0;
}  