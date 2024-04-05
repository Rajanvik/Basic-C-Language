/*:: Question
     Write a function to count the occurrence of vowels in a string.  */

#include<stdio.h>
#include<string.h>

int countVowels(char str[]);

int main() 
{
	char str[]="Rajan";
	// int j=strlen(str);
	// printf("\ntotal length present %d",j);
	// printf("\nConsonant are %d",j-countVowels(str));
	printf("\nVowel are %d",countVowels(str));
    
}
int countVowels(char str[])
{
	int count=0;

	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			count++;
		}
	}
	return count;
}