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

    for (int i = 1; i < size; i++) {
        int temp = i;
        for (int j = i; j > 0; j--)
		 {
            if (arr[j] < arr[j - 1]) 
			{
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
         }
    }

	printf("insertion sort of array is : ");

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}