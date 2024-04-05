# include <stdio.h>
# include <stdlib.h>

# define MAXSIZE 10

void insert(int arr[], int * size, int index, int value);

void print(int arr[], int size);

int binarySearch(int arr[], int size, int target);


void bubbleSort(int arr[], int size);

int delete(int arr[], int * size, int index); 

int main () {
    int size = 0;
    printf ("\nEnter size of array: ");
    scanf ("%d", &size);

    int arr[MAXSIZE];

    for (int i = 0; i < size; i++) {
        printf ("arr[%d]: ", i);
        scanf ("%d", &arr[i]);
    }

    int index, value, target;

    int option = 1;

    while (option) {

        printf ("\n\nArray menu: ");
        printf ("\n\t 0. EXIT ");
        printf ("\n\t 1. Insert ");
        printf ("\n\t 2. BinarySearch ");
        printf ("\n\t 3. BubbleSort ");
        printf ("\n\t 4. Delete ");
        
        printf ("\n\nEnter option: ");
        scanf ("%d", &option);

        switch (option) {
            case 1: 
                index = 0;
                printf("\nEnter index:");
                scanf ("%d", &index);

                value = 0;
                printf("\nEnter value:");
                scanf ("%d", &value);
                insert(arr, &size, index, value);
                print(arr, size);
                break;
            case 2:
                target = 0;
                printf("\nEnter target: ");
                scanf("%d", &target);
                bubbleSort(arr, size);
                printf("%d (target) -> arr[%d]", target, binarySearch(arr, size, target));
                print(arr, size);
                break;
            case 3:
                bubbleSort(arr, size);
                print(arr, size);
                break;
            case 4:
                index =0;
                printf("\nEnter index: ");
                scanf("%d", &index);
                printf("%d deleted", delete(arr, &size, index));
                print(arr, size);
                break;
            default: 
                printf("\n Invalid Input!");
        }
    }
    printf("\nExiting...");
    return 0;
}

void print(int arr[], int size) {
    printf ("\n[");
    for (int i = 0; i < size - 1; i++) {
        printf ("%d ,", arr[i]);
    }
    printf("%d]", arr[size- 1]);
}

void insert (int arr[], int * size, int index, int value) {
    for (int i = *size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    if (*size >= MAXSIZE) {
        printf ("Warning: Limit size exceeded.\n");
    } else {
        *size += 1;
    }
    arr[index] = value;
}

int binarySearch (int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] < target) {
            start = mid + 1;
        } else if (target < arr[mid]) {
            end = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}

void bubbleSort(int arr[], int size) {
    for (int i = size - 1; i > 0; i--) {
        int compare = 0;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                compare++;
            }
        }
        if (compare == 0) {
            return;
        }
    }
}

int delete(int arr[], int * size, int index) {
    int temp = arr[index];
    for (int i = index; i < * size; i++) {
        arr[i] = arr[i + 1];
    }
    arr[*size - 1] = 0;
    *size -= 1;
    return temp;
}