#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	char ch;
	int i=0;

	printf ("enter a charcter : ");
	while(ch!='\n')     // charcter ko tab tak input lena hai jab tak next line wala charcter n a jaye 
	{
		scanf("%c",&ch);
		str[i]=ch;
		i++;
	}
	str[i]='\0';
	puts(str);

	return 0;
}