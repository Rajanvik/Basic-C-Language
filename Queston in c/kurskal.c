#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 
// global variables
int i, j, k, a, b, u, v, n, ne = 1;
// ne = number of edge.
int min, mincost = 0, cost[9][9], parent[9];

// find parent node function
int findpar(int);
int unio(int, int);

void main() {
    printf("\n\tImplementation of Kruskal's Algorithm\n");
    printf("\nEnter the no. of vertices:");
    scanf("%d", &n);
    printf("\nEnter the cost adjacency matrix:\n");
    for (i = 1; i<= n; i++) {
        for (j = 1; j<= n; j++) {
          scanf("%d", &cost[i][j]);
          if (cost[i][j] == 0) // if edge not present
            cost[i][j] = 999;   // present max // 999
        }
    }
    printf("\n\nThe edges of Minimum Cost Spanning Tree are\n");
    // number of edges less tha total no. of vertex
    while (ne < n) {
        for (i = 1, min = 999; i <= n; i++) {
            for (j = 1; j<= n; j++) {
                if (cost[i][j] < min) {
                    // find minimum value
                    min = cost[i][j];
                    // edge from matrix
                    a = u = i;
                    // store the minimum value a, u
                    b = v = j;
                }
            }
        }
        // find original parent of both vertex
        u = findpar(u);
        v = findpar(v);

        // union functions check if both of them same parent or not?
        if (unio(u, v)) {
          printf("%d edge (%d,%d) =%d\n", ne++, a, b, min);
          // add that minimum weight into the mincost of spaning tree
          mincost += min;
        }
        cost[a][b] = cost[b][a] = 999;
    }
    printf("\n\tMinimum cost = %d\n", mincost);
    getch();
}

// find parents between two nodes
int findpar(int i) {
    while (parent[i])
        i = parent[i];
    return i;
}

// union of two set
int unio(int i, int j) {
    if (i != j) {
        // parent are different udate parent
        parent[j] = i;
        // parent are same return 1
        return 1;
    }
    // parent are same return 0
    return 0;
}