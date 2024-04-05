# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <string.h>

#define MAX 5

int size = 7;
int root = 0;
int arr[7][7] = {
        /*  0, 1, 2, 3, 4, 5, 6 */
/* 0 */    {0, 1, 1, 1, 0, 0, 0},
/* 1 */    {1, 0, 1, 0, 0, 0, 0},
/* 2 */    {1, 0, 0, 1, 0, 0, 0},
/* 3 */    {1, 0, 1, 0, 1, 0, 0},
/* 4 */    {0, 0, 1, 1, 0, 1, 1},
/* 5 */    {0, 0, 0, 0, 1, 0, 0},
/* 6 */    {0, 0, 0, 0, 1, 0, 0},
};

typedef struct queue {
    int start; 
    int end;
    int arr[MAX];
} queue;

queue * initQueue() {
    queue * q = (queue *) malloc(sizeof(queue));

    q->start = -1;
    q->end = -1;
    return q;
}

void insert(queue * q, int val) {
    q->arr[q->end++] = val;
}

int delete(queue * q) {
    return q->arr[q->start++];
}

bool isEmpty(queue * q) {
    return q->start == q->end;
}

void breathFirstSearch(int root, int matrix[][size]) {

    int visited[size];
    memset(visited, 0, sizeof(visited)); 

    queue * q = initQueue();
    printf("\n%d", root);
    visited[root] = 1;
    insert(q, root);

    while (!isEmpty(q)) {
        int node = delete(q);

        for (int i = 0; i < size; i++) {

            if (matrix[node][i] == 1 && visited[i] == 0) {
                printf(" %d", i);
                visited[i] = 1;
                insert(q, i);
            }
        }
    }

}

int main() {

    breathFirstSearch(root, arr);
    return 0;
}