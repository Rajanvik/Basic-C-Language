//:: Case-1 (Difference)

#include<stdio.h>

int main()
{
	int age1=22;
	int age2=23;
	int *ptr1=&age1;
	int *ptr2=&age2;

	printf("Difference=%u\n",ptr2-ptr1);

	return 0;
}

//:: Case-2 (Comparison)

// #include<stdio.h>

// int main()
// {
// 	int age1=22;
// 	int age2=23;
// 	int *ptr1=&age1;
// 	int *ptr2=&age2;

// 	printf("Camparison-1=%u\n",ptr1==ptr2);
// 	ptr2=&age1;
// 	printf("Camparison-2=%u\n",ptr1==ptr2);
// 	return 0;
// }