#include<stdio.h>

void merge(int arr[], int left, int mid, int right){

    int l = mid - left + 1;
    int m = right - mid;
    int a1[l],a2[m];

    for(int i = 0; i < l; i++){
        a1[i] = arr[left+i];
    }
    for(int j = 0; j < m; j++){
        a2[j] = arr[mid+j+1];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i<l && j<m)
    {
        if(a1[i]<a2[j]){
            arr[k] = a1[i];
            i++;
        }
        else{
            arr[k] = a2[j];
            j++;
        }
        k++;
    }
    while (i<l)
    {
        arr[k] = a1[i];
        i++;
        k++;
    }
    while (j<m)
    {
        arr[k] = a1[i];
        j++;
        k++;
    }
    
}
void mergsort(int arr[], int left , int right){

    if(left<right){

        int mid = left+(right-left)/2;
        mergsort(arr, left, mid);
        mergsort(arr,mid+1, left);
        merge(arr, left, mid, right);
    }

}
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    mergsort(arr,0,size-1);
    printf("Merg Elements: \n");
    printArray(arr, size);

    return 0;
}
