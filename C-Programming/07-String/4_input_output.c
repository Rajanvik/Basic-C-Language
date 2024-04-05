#include<stdio.h>

int main()
{
	char name[50];
	printf("\nenter a name : ");
	scanf("%s",name);

	printf("your name is %s ",name);

	return 0;
}

// Output-

// enter a name : Rajan
// your name is Rajan

// enter a name : Rajan Kumar     //  in this case input Full Name
// your name is Rajan             //  but outut print First Name (in this case ivalide output)