#include<stdio.h>

void MaxElement(int arr[], int size){
    int max = arr[0];
    for (int i = 0 ; i <size; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    printf("maximum element array = %d",max);
}

int main(){
    int arr[5] = {4,45,96,1,2};
    MaxElement(arr, 5);
    return 0;
}