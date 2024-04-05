#include<stdio.h>

void printNamaste();
void printBonjour();

int main()
{
	printf("Enter f for french & i for indian : ");
	char ch;
	scanf("%c",&ch);

	if(ch=='i')
	{
		printNamaste();
	}
    else 
	{
		printBonjour();
	}

}

void printNamaste()
{
     printf("Namaste\n");
}

void printBonjour()
{
     printf("Bonjour\n");
}