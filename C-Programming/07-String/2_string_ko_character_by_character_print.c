// #include<stdio.h>

// int main()
// {
// //	char name[]={'R','A','J','A','N','\0'};
//     char name[]="RAJAN";
// 	char *ptr=name;

// 	while(*ptr!='\0')
// 	{
// 		printf("%c",*ptr);
// 		ptr++;
// 	}
// 	return 0;
// }


#include<stdio.h>

void printString(char arr[]);

int main()
{
	char firstName[]="RAJAN";
	char lastName[]="KUMAR";
	printString(firstName);
	printString(lastName);

	return 0;
}
void printString(char arr[])
{
	for(int i=0;arr[i]!='\0';i++)
	{
		printf("%c",arr[i]);
	}
	printf("\n");
}