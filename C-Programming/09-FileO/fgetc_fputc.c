#include<stdio.h>
int main()
{
    FILE *ptr = fopen("getcdemo.txt", "r");
    char c =fgetc(ptr);

    printf("The value of character is %c\n",c);
    printf("The value of character is %c\n",c);  
    printf("The value of character is %c\n",c);  
    printf("The value of character is %c\n",c);  
    printf("The value of character is %c\n",c);  

    return 0;
}