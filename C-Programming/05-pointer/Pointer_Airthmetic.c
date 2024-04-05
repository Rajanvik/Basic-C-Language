// :: Case-1

#include<stdio.h>

int main()
{
	int age = 22;
	int *ptr=&age;
	
	printf("ptr=%u\n",ptr);
	ptr++;
	printf("ptr=%u\n",ptr);
	ptr--;
	printf("ptr=%u\n",ptr);

	return 0;

}

// :: Case-2

// #include<stdio.h>

// int main()
// {
// 	float price = 22;
// 	float *ptr=&price;
	
// 	printf("ptr=%u\n",ptr);
// 	ptr++;
// 	printf("ptr=%u\n",ptr);
// 	ptr--;
// 	printf("ptr=%u\n",ptr);

// 	return 0;

// }

//:: Case-3

// #include<stdio.h>

// int main()
// {
// 	char star = '*';
//     char *ptr=&star;
	
// 	printf("ptr=%u\n",ptr);
// 	ptr++;
// 	printf("ptr=%u\n",ptr);
// 	ptr--;
// 	printf("ptr=%u\n",ptr);

// 	return 0;

// }