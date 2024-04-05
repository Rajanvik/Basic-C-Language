// // Traverse -> program to read and display the elements of one dimensional array

// #include<stdio.h>

// int main()
// {
//   int size;
//   printf("enter a size : ");
//   scanf("%d", &size);
//   int arr[size];

//   printf("enter a array element : \n");
//   for (int i=0;i<size;i++)
//   {
//     printf("arr[%d] = ",i);
//     scanf("%d",&arr[i]);
//   }
//   printf("1-D array element is : ");\
//   for(int i=0;i<size;i++)
//   {
//     printf("%d ",arr[i]);
//   }
// }

// Insert an element at a particular index in array.

// #include<stdio.h>

// int main()
// {
//     int size;
//     printf("Enter a size : ");
//     scanf("%d",&size); 
//     int arr[size];

//     for (int i=0;i<size;i++)
//     {
//         printf("arr[%d] = ",i);
//         scanf("%d",&arr[i]);
//     }
//     int postion,element;
//     printf("Enter a postion : ");
//     scanf("%d",&postion);
//     printf("enter a array element : ");
//     scanf("%d",&element);
//     for(int i=size ; i>=postion; i--)
//     {
//         arr[i+1] = arr[i];
//     }
//     size++;
//     arr[postion] = element;
//     printf("After element insert array element array: ");
//     for(int i=0; i<size; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// Insert an element at a begin position .

// #include<stdio.h>

// int main()
// {
//     int size;
//     printf("Enter a size : ");
//     scanf("%d",&size); 
//     int arr[size];

//     for (int i=0;i<size;i++)
//     {
//         printf("arr[%d] = ",i);
//         scanf("%d",&arr[i]);
//     }
//     int element;
//     printf("enter a array element : ");
//     scanf("%d",&element);
//     for(int i=size ; i>= 0 ; i--)
//     {
//         arr[i+1] = arr[i];
//     }
//     size++;
//     arr[0] = element;
//     printf("After element insert array element array: ");
//     for(int i=0; i<size; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// insrt the array elements at end postion 

// #include <stdio.h>

// int main()
// {
//     int size;
//     printf("enter a size : ");
//     scanf("%d",&size);
//     int arr[size]; 

//     printf("enter array elements : \n");
//     for (int i =0;i<size;i++)   
//     {
//         printf("arr[%d] = ",i);
//         scanf("%d",&arr[i]);
//     }
//     int elements;
//     printf("enter array elements insert : ");
//     scanf("%d",&elements);
//     size++;
//     arr[size-1] = elements;
//     for(int i=0; i<size; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0; 
// }

// Copy the element array to another array

// #include<stdio.h>

// int main()
// {
//     int size;
//     printf("Enter a size : ");
//     scanf("%d",&size); 
//     int arr[size];

//     printf("Enter the array elemment : \n");
//     for (int i=0; i<size; i++)
//     {
//         printf("arr[%d] = ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("Not a copy array element : \n");
//     for (int i=0; i<size; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     int arr1[size];
//     for (int i=0;i<size;i++)
//     {
//         arr1[i] = arr[i];
//     }
//     printf("\ncopy from one array to another array element : \n");
//     for (int i=0; i<size; i++)
//     {
//         printf("%d ",arr1[i]);
//     }
//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     int size;
//     printf("Enter a size : ");
//     scanf("%d",&size); 
//     int arr[size];

//     printf("Enter the array elemment : \n");
//     for (int i=0; i<size; i++)
//     {
//         printf("arr[%d] = ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("The array elements is : ");
//     for (int i=0; i<size; i++)
//     {
//         printf("%d ",arr[i]);  
//     }
//     int element;
//     printf("\nEnter a array element search : \n");
//     scanf("%d",&element);
//     for (int i=0; i<size; i++)
//     {
//         // count = 0;
//         if(arr[i]==element)
//         {
//             printf("%d element present in %d index",element,i);
//             exit(0);
//         }
//     }
//     printf("the nummber is not found");
//     // if(count == 1)
//     // {
//     //     printf("%d element present in %d inndex",element,i);
//     // }
//     // else
//     // {
//     //     printf("the nummber is not found in array");
//     // }
//     return 0;
// }

// arrange the array element in sorted order

// #include<stdio.h>

// int main()
// {
//     int size;
//     printf ("enter the array size : ");
//     scanf("%d", &size);
//     int arr[size];

//     printf("enter the array element : \n");
//     for(int i=0;i<size;i++)
//     {
//         printf("arr[%d] = ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("the array element is : ");
//     for (int i=0; i<size; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\nthe array element are sorted : ");
//     for (int i=0; i<size; i++)
//     {
//         for (int j=i+1; j<size; j++)
//         {

//             if(arr[i]>arr[j])
//             {
//                 int temp = arr[i];
//                   arr[i] = arr[j];
//                   arr[j] = temp;
//             }
//         }
//     }
//     for (int i=0; i<size; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


// Delation of array  elements

// #include<stdio.h>

// int main()
// {
//     int size;;
//     printf("enter the size : ");
//     scanf("%d",&size);
//     int arr[size];

//     printf("Enter the array element :\n");
//     for(int i=0;i<size;i++)
//     {
//         printf("arr[%d] = ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("The array elements is : ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     int postion;
//     printf("\nenter delete postion number : ");
//     scanf("%d",&postion);
//     for(int i=postion;i<size;i++)
//     {
//         arr[i-1] = arr[i];
//     }
//     printf("After delete element : ");
//     for(int i=0;i<size-1;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// print element in reverse order 
//            or
// read n-number of values in an array and display it in reverse order

// #include<stdio.h>

// int main()
// {
//     int size;
//     printf("enter a size : ");
//     scanf("%d",&size);
//     int arr[size];

//     printf("enter the array elements :\n");
//     for(int i=0;i<size;i++)
//     {
//         printf("arr[%d]= ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("the array elements : ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\nelement in reverse order : ");
//     for(int i=size-1;i>=0;i--)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// revers  of array  elements in reverse order

// #include<stdio.h>

// int main()
// {
//     int size;
//     printf("enter a size : ");
//     scanf("%d",&size);
//     int arr[size];

//     printf("enter the array element : \n");
//     for(int i=0;i<size;i++)
//     {
//         printf("arr[%d] = ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("the array elements are : ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     for (int i=0;i<size/2;i++)
//     {

//         int temp = arr[i];
//           arr[i] = arr[size-1-i];
//           arr[size-1-i] = temp;
//     }
//     printf("\nreverse array elements are : ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0; 
// }

// revrse only half of part 

// #include<stdio.h>

// int main()
// {
//     int size;
//     printf("enter a size : ");
//     scanf("%d",&size);
//     int arr[size];

//     printf("enter the array elements :\n");
//     for(int i=0;i<size;i++)
//     {
//         printf("arr[%d]= ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("the array elements : ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\nelement in reverse order : ");
//     for(int i=size-1;i>=0;i--)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// revers  of array  elements in reverse order

// #include<stdio.h>

// int main()
// {
//     int size;
//     printf("enter a size : ");
//     scanf("%d",&size);
//     int arr[size];

//     printf("enter the array element : \n");
//     for(int i=0;i<size;i++)
//     {
//         printf("arr[%d] = ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("the array elements are : ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     int temp1 = size/2;
//     for (int i=0;i<temp1/2;i++)
//     {

//         int temp = arr[i];
//           arr[i] = arr[size-1-i];
//           arr[size-1-i] = temp;
//     }
//     printf("\nreverse array elements are : ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0; 
// }

// update an element at th given index

// #include<stdio.h>

// int main()
// {
//     int size;
//     printf("Enter a size : ");
//     scanf("%d",&size); 
//     int arr[size];

//     for (int i=0;i<size;i++)
//     {
//         printf("arr[%d] = ",i);
//         scanf("%d",&arr[i]);
//     }
//     int postion,element;
//     printf("Enter a postion : ");
//     scanf("%d",&postion);
//     printf("enter a array element : ");
//     scanf("%d",&element);
//     arr[postion] = element;
//     printf("updating the element : ");
//     for(int i=0; i<size; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// linear search

// #include<stdio.h>

// int main()
// {
//     int size;
//     printf("Enter a size : ");
//     scanf("%d",&size); 
//     int arr[size];

//     printf("enter the array element : \n");
//     for (int i=0;i<size;i++)
//     {
//         printf("arr[%d] = ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("\nthe array elements : ");
//     for (int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     int element;
//     printf("\nenter a search element : ");
//     scanf("%d",&element);
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==element)
//         {
//            printf("\n%d elements present in the array",element);
//            exit(0);
//         }
//     }
//     printf("\nsearch element not present in the array");
//     return 0;
// }

// binary search 
// low = 0
// high = size-1

#include<stdio.h>

int main()
{
    int size;
    printf("enter a size : ");
    scanf("%d", &size);
    int arr[size];

    printf("enter the array element : \n");
    for (int i=0;i<size;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nthe array elements : ");
    for (int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    int low = 0,high = size-1;
    int key;
    printf("\nenter a key : ");
    scanf("%d", &key);

    while (low<=high)
    {
        int mid = (low+high)/2;
        if(key<arr[mid])
        {
            high = mid - 1;
        }
        else if (key>arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            printf("this element present in the array");
            break;
        }
        
    }  
    return 0;
}