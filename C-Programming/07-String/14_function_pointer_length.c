//hame string ka length calculate karna hai function , pointer ki help se 

#include<stdio.h>
#include<string.h>

int countLeng(char *str);

int main()
{
   char str[]="Rajan";
   int l=countLeng(str);
   printf("Total length is %d",l);
   return 0;
}
int countLeng(char *str)
{
	int length=0;
    char *ptr=str;

	while(*ptr!='\0')
	{
		length++;
		ptr++;
	}
	return length;
}

