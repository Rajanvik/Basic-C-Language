#include<stdio.h>

int main()
{
    int a = 22;
	int b = a;
	int c = b+1;
	int d = 1,  e;
    int a=b=c=1;   //invalide statement

	int a,b,c;    // valide
	a=b=c=1;     //  statement


	int oldage = 22;
	int newage = oldage + year;   //invalide statement
	int year = 2;


	int oldage = 22;
	int year = 2;
	int newage = oldage + year;   //valide statement

    return 0;
}