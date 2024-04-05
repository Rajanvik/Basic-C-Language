#include <stdio.h>

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// knapsack function takes the maximum weight W.
// arrays of weights wt and values val for n items as input.

// Function to solve the Knapsack problem
int knapsack(int W, int wt[], int val[], int n) {
    // Create a table to store the maximum values for each weight
    int table[n + 1][W + 1];

    // Initialize the table with zeros
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            if (i == 0 || j == 0)
                table[i][j] = 0;
            else if (wt[i - 1] <= j)
                table[i][j] = max(val[i - 1] + table[i - 1][j - wt[i - 1]], table[i - 1][j]);
            else
                table[i][j] = table[i - 1][j];
        }
    }

    // The maximum value will be at table[n][W]
    return table[n][W];
}

int main() {
    // Example inputs
    int val[] = {1, 2, 5, 6};
    int wt[] = {2, 3, 4, 5};
    int W = 8;
    int n = sizeof(val) / sizeof(val[0]);

    // Solve the Knapsack problem and print the result
    int result = knapsack(W, wt, val, n);
    printf("The maximum value that can be obtained is: %d\n", result);

    return 0;
}



// :: Output : The maximum value that can be obtained is: 8
