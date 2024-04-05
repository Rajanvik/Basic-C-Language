#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100];
	char str2[100];
	char ch;
	int i=0;

	printf ("\nenter the first string : ");
	scanf("%s",str1);
   
	printf ("enter the second string character by character : \n");
	while(ch!='\n')     // charcter ko tab tak input lena hai jab tak next line wala charcter n a jaye 
	{
		fflush(stdin);
		scanf("%c",&ch);
		str2[i]=ch;
		i++;
	}
	str2[i-1]='\0';
   
   printf("\nThe value of str1 is %s",str1);
   printf("\nThe value of str2 is %s",str2);

   printf("\ncompare str1 and str2 is %d",strcmp(str1,str2));   

	return 0;
}

// enter the first string : Apple
// enter the second string character by character : 
// B 
// a
// n
// a
// n
// a


// The value of str1 is Apple
// The value of str2 is Baanan
// compare os str1 and str2 is -1   // str2>str1 --> Baanan > Apple