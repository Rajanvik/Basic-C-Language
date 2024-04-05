#include <stdio.h>

int arr[] = {10,20,45,50,56,64,78,89,91,100}; 
int len = sizeof(arr)/sizeof(arr[0]); 

void maxMin() { 
    int count = 0;
    int max = 0; 
    int min = 0;

    for (int i = 1; i < len; i++) 
    { 
        count = count + 1;
        if (arr[max] < arr[i]) 
        { 
            max = i;
        }
        count = count + 1;
        if (arr[min] > arr[i]) 
        { 
            min = i;
        }
        // count += 2;
    }
    printf("\n\tMaximum Element = %d", arr[max]);
    printf("\n\tMinimum Element = %d", arr[min]);
    printf("\n\tNo of Comparisions = %d\n", count);
}

void maxMin2() {
    int count = 0;
    int max = 0;
    int min = 0;
    for (int i = 1; i < len; i++) 
    {
        count++;
        if (arr[max] < arr[i]) 
        {
            max = i;
        }
        else 
        {
            count++;
            if (arr[min] > arr[i]) 
            {
                min = i;
            }
        }
    }
    printf("\n\tMaximum Element:: %d", arr[max]);
    printf("\n\tMinimum Element:: %d", arr[min]);
    printf("\n\tNo of Comparisions:: %d\n\n", count);
}

int min;
int max;

// divide and conquer 
void maxMinDac(int start, int end) {
    if (start == end) {
        min = arr[start];
        max = arr[start];
    }
    else if (start == end-1) 
    {
        if (arr[start] < arr[end]) 
        {
            min = arr[start];
            max = arr[end];
        }
        else 
        {
            min = arr[end];
            max = arr[start];
        }
    }
    else 
    {
        int mid = (end - start) / 2 + start;
        maxMinDac(start, mid);
        int min1 = min;
        int max1 = max;
        maxMinDac(mid + 1, end);
        if (min1 < min) 
        {
            min = min1;
        }
        if (max1 > max) 
        {
            max = max1;
        }
    }
}

int main () 
{
    printf("\n\n:: maxMin Function with 2 if statements::");
    maxMin();
    printf("\n\n:: maxMin2 Function with 1 if and else statement ::");
    maxMin2();
    printf("\n\n:: maxMinDoc Function using Divide and Conquer::");
    maxMinDac(0, len - 1); 
    printf("\n\tMaximum Element = %d", max);
    printf("\n\tMinimum Element = %d", min);
    printf("\n");
    return 0;
}
