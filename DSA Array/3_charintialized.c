#include<stdio.h>

void printArray(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c ", arr[i]);
    }
}

int main()
{
    char ch[5] = { 'R','A','J','A','N'};
    printArray(ch,5);
    return 0;
}