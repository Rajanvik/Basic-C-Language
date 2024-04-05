#include<stdio.h>
#include<string.h>

int lengthofString(char str[]);

int main()
{
	int str[100],k;
	printf("enter a number : ");
	gets(str);
	k=lengthofString(str);
	printf("the length of string is %d",k);
    return 0;
}
int lengthofString(char str[])
{
	// int count=0;
	// count=strlen(str);
	// return count;

	int count=0;
	strlen(str);
	for(int i=0;str[i]!='\0';i++)
	{
		count++;
	}
	return count;
}