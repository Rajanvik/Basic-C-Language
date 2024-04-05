// Insertion Sorted

# include <stdio.h>

int main() {
    int size = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
	printf("enter array element : \n");
    for(int i = 0; i < size; i++)
	 {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
     }

    for (int i = 1; i < size; i++) 
    {
        int temp = arr[i];
        int j=i-1;
        for ( ; j >= 0 && arr[j] > temp ; j--)
        {
              arr[j+1] = arr[j];
        }
        // while (j>=0 && arr[j] > temp)
        // {
        //     arr[j+1] = arr[j];
        //     j--;
        // }
        arr[j+1] = temp;
    }

	printf("insertion sort of array is : ");

    for(int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}