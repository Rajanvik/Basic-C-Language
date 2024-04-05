# include <stdio.h>
# include <stdlib.h>
# include <memory.h>

# define MAX 5

void show(int arr[], int n) {
    // Show array
    printf("\n\n\t\t[");
    for (int i = 0; i < n - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d]", arr[n - 1]);
}

void display(int arr[], int n) {
    // Display board
    printf("\n\t\t");
    for(int i = 0; i < n; i++) {
        printf(" _");
    }

    for(int i = 0; i < n; i++) {
        printf("\n\t\t");
        printf("|");
        for (int j = 0; j < n; j++) {
            if (arr[i] == j + 1) {
                printf("%d", arr[i]);
            } else {
                printf("_");
            }
            printf("|");
        }
    }
    show(arr, n);
    printf("\n");
}

int place(int arr[], int k, int index) {
    for (int i = 0; i <= k; i++) {
        if (arr[i] == index) {
            return 0;
        }
        if (abs(arr[i] - index) == abs(i - k)) {
            return 0;
        }
    }
    return 1;
}

void nQueens(int arr[], int n, int k) {
    if (k == n) {
        // If all queens have been placed successfully, display the arrangement
        display(arr, n);
        return;
    }

    for(int i = 1; i <= n; i++) {
        if (place(arr, k, i)) {
            // If it's a valid position, place the queen and move to the next row
            arr[k] = i;
            nQueens(arr, n, k + 1);
            arr[k] = 0; // Backtrack by removing the queen for other positions
        }
    }
}

int main () {
    int queens;

    printf("\n:: N Queens Problem::");
    printf("\n\n\tNumber of Queens: ");
    scanf("%d", &queens);

    int arr[queens];
    memset(arr, 0, sizeof(arr));

    // Solve the N Queens problem
    nQueens(arr, queens, 0);

    return 0;
}
