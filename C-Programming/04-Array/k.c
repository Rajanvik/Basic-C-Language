//06. Count Element Smaller Than X

// #include<stdio.h>

// int main()
// {
//     int size;
//     printf("enter a size : ");
//     scanf("%d",&size);
//     int a[size];
//     printf("enter a array element :\n");
//     for(int i=0;i<size;i++)
//     {
//         printf("arr[%d]=",i);
//         scanf("%d",&a[i]);
//     }
//     int element,temp;
//     printf("\nenter a key : ");
//     scanf("%d",&element);
    
//     printf("Elements less than or equal to %d are ",element);
//     int count=0;
//     for(int i=0;i<size;i++)
//     {
//         for(int j=i+1;j<size;j++)
//         {
//             if(a[j] > a[i])    
//             {    
//                 temp = a[i];    
//                 a[i] = a[j];    
//                 a[j] = temp;     
//             }  
//         }
//         if(element>=a[i])    
//         {    
//             printf("%d ",a[i]);
//             count++;  
//         }
//     }
//     printf("\nCount of smaller or equal elements is %d ",count);
//     return 0;
// }


//06. Count Element Greater Than X

#include<stdio.h>

int main()
{
    int size;
    printf("enter a size : ");
    scanf("%d",&size);
    int a[size];
    printf("enter a array element :\n");
    for(int i=0;i<size;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&a[i]);
    }
    int element,temp;
    printf("\nenter a key : ");
    scanf("%d",&element);
    printf("Elements Greater than or equal to %d are ",element);
    int count=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[j] > a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }  
        }
        if(element<=a[i])    
        {    
            printf("%d ",a[i]);
            count++;  
        }
    }
    printf("\nCount of Greater or equal elements is %d ",count);
    return 0;
}