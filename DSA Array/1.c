#include<stdio.h>

int main()
{
    // Declear Array
    int a1[15];
    
    // Accessing an array
    printf("\nArray of 14 Index :%d\n", a1[14]);
    // printf("\nArray of 20 Index :%d\n", a1[20]);
    /* mera jo array hai at least 21 size ko hona chahiye 
      lekin mera a1 array 15 size ka bana hai.*/

    // Intializing an array
    int a2[4] = {15,96,23,45};

    // Accessing an array
    printf("\nArray of 14 Index :%d\n", a2[2]);

    // Intializing an array
    int a3[15] = {2,7};

    // Accessing an array in for loop
    printf("\n-------------Array of 3 access value-----------------\n");

    for (int i = 0; i < 15; i++)
    {
        printf("%d ", a3[i]);
    }

    // Intializing all location with 0
    int a4[15] = {0};

    // Accessing an array in for loop
    printf("\n-------------Array of 4 access value-----------------\n");
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", a4[i]);
    }

    // Intializing all location with 1 [not possible with below line]
    int a5[15] = {1};

    // Accessing an array in for loop
    printf("\n-------------Array of 5 access value-----------------\n");
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", a5[i]);
    }
    
    return 0;
}