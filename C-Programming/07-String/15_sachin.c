/*
Write a program to take your name as input and do the following.
Ex. Name: Sachin Ramesh Tendulkar
              o/p- Tendulkar S. R.
*/
// temp = index of T;
// str = "SR";

/*
1 -> save the first index of the string in temp variable
2 -> if current element == ' ', then add the element at temp to str array
*/
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main () {
    char *ptr;
    scanf("%[^\n]", ptr);
    char str[1000];
    int count = 0;
    int temp = 0;
    for (int i = 1; ptr[i] != '\0'; i++)
    {
        if (ptr[i] == ' ') {
            str[count] = ptr[temp];
            temp = i + 1;
            count++;
        }
    }
    // str = "SR"
    str[count] = '\0';
    printf("\n");
    for(int i = temp; ptr[i] != '\0'; i++) {
        printf("%c", ptr[i]);
    }
    // Tendulkar

    printf(" %c", str[0]);
    // Tendulkar S
    for (int i = 1; str[i] != '\0'; i++) {
        printf(".%c", str[i]);
        // Tendulkar S.R
    }

    return 0;
}