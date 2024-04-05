# include <stdio.h>

int bubblesort(int arr[], int size) {
    int compare = 0;
    for (int i = size - 1; i > 0; i--) {
        int count = 0;
        for (int j = 0; j < i; j++) {
            compare++;
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count++;
            }
        }
        if (count == 0) {
            return compare;
        }
    }
    return compare;
}

int main () {
    // int arr[] = {5, 4, 3, 2, 1};
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("\n%d\n", bubblesort(arr, sizeof(arr)/sizeof(arr[0])));
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}