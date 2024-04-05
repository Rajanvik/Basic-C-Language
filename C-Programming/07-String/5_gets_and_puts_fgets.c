#include<stdio.h>

int main()
{
//	char name[]="RAJAN KUMAR"
    char name[20];

    // gets(name);
    // fgets(name,20,stdin);
    // puts(name);

    printf("enter your name : ");
	fgets(name,20,stdin);
	printf("your name is %s ",name);

	return 0;

}