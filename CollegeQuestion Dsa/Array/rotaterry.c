#include<stdio.h>

int RotateArray(int arr[], int start, int end){
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int n;
    printf("Enter a number of rotate : ");
    scanf("%d",&n);
    RotateArray(arr, 0, 7);
    RotateArray(arr, 0, n-1); //3
    RotateArray(arr, n, 7);

    for (int i = 0; i < 7; i++)
    {
        printf(" %d",arr[i]);
    }
    
    return 0;
}