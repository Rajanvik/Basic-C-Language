#include <stdio.h>
int main () {
    int size = 0;
    printf("\nEnter size of array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("\tarray[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int smallest = arr[0], small = arr[1];
    for(int i = 1; i < size; i++)
	{
        if (smallest > arr[i])
		{
            small = smallest;
            smallest = arr[i];
        } else if (small > arr[i])
		{
            small = arr[i];
        }
    }
    printf("\nSmallest: %d", smallest);
    printf("\n2nd Smallest: %d", small);
    return 0;
}