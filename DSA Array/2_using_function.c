#include<stdio.h>

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    // Declear Array
    int a1[15];
    
    // Accessing an array
    printf("\nArray of 14 Index :%d\n", a1[14]);
    printf("\nArray of 20 Index :%d\n", a1[20]);
    /* mera jo array hai at least 21 size ko hona chahiye 
      lekin mera a1 array 15 size ka bana hai.*/

    // Intializing an array
    int a2[4] = {15,96,23,45};

    // Accessing an array
    printf("\nArray of 14 Index :%d\n", a2[2]);

    // Intializing an array
    int a3[15] = {2,7};
    printf("\nsize of a3 = %d",sizeof(a3)/sizeof(a3[0])); // doubt

    // Accessing an array in for loop
    printf("\n-------------Array of 3 access value-----------------\n");
    printArray(a3, 15);

    // Intializing all location with 0
    int a4[15] = {0};

    // Accessing an array in for loop
    printf("\n-------------Array of 4 access value-----------------\n");
    printArray(a4, 15);

    // Intializing all location with 1 [not possible with below line]
    int a5[15] = {1};

    // Accessing an array in for loop
    printf("\n-------------Array of 5 access value-----------------\n");
    printArray(a5, 15);
    
    return 0;
}