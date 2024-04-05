#include<stdio.h>
#include<stdlib.h>
#include <memory.h>

int n = 5;

void display(int arr[]) {
    printf("\n[");
    for(int i=0; i< n - 1; i++) {
        printf("%d, ", arr[i]);       
    }
    printf("%d]", arr[n - 1]);
}

int main(){
    int arr[5];
    printf("\n Size of Integer: %d" , sizeof(arr[0]));
    printf("\n Array: %d", arr);
    printf("\n Array[0]: %d", &arr[0]);
    printf("\n Array[1]: %d", &arr[1]);
    memset(arr, 0, sizeof(arr));

    display(arr);

    return 0;
}