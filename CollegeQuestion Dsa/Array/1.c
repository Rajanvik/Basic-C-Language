#include<stdio.h>
#include<string.h> 

void checkSpecialAscii(char s[]);

int main()
{
     char s[30]; 
     scanf("%s",s); 
     checkSpecialAscii(s);
     return 0; 
}
void checkSpecialAscii(char s[])
{
    int b[26],i,index; 
    for(i=0;i<26; i++)
        b[i]=0;
    for(i=0;i<strlen(s); i++)
    {
        index=122-(int)s[i]+1;
        b[index-1]++;
    }
    for(i=0;i<strlen(s); i++)
    {
        index=122-(int)s[i]+1; 
        if(b[index-1] != index)
        {
            printf("no\n");
            return;
        }
        printf("yes\n"); 
        return;
    }
}
