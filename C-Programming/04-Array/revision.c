// array jo similar data types ki values ko store karta hai
// array is always start from 0 index 

//[] -> subscript opertor bolte hi 

// 1->declaration of array 
// int arr[size]

// 2->intialisation of array
// int mark[3] = {45,75,96}

// 3->dono syntax sahi hai 
// int mark[3] = {45,75,96}
// int mark[] = {45,75,96}

// memory location represent 
// int the above example har ek index 4 byte hai yani (4*3 = 12)
// Example :- char c[7] -> 7(size) * 1(char is 1 byte)


//# 1-D array

// #include<stdio.h>

// int main()
// {
//     int size;
//     printf("enter a size : ");
//     scanf("%d",&size);

//     int arr[size];

//     for (int i=0;i<size;i++)
//     {
//         printf("arr[%d] = ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("The 1-D array elements are: ");
//       for (int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//      return 0;
// }

//#  2-D array

// # include <stdio.h>

// int main()
// {
//     int row,coulmn;
//     printf("enter row : ");
//     scanf("%d",&row);
//     printf("enter coulmn : ");
//     scanf("%d",&coulmn);

//     int arr[row][coulmn];

//     for (int i=0;i<row;i++)
//     {
//         for(int j=0;j<coulmn;j++)
//         {
//             printf("arr[%d][%d] = ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("The 2-D array elements are: \n");
//     for (int i=0;i<row;i++)
//     {
//         for(int j=0;j<coulmn;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// three student ka mark sore karwana hai

// #include<stdio.h>

// int main()
// {
//     int mark[3]= {75,85,63};
//     printf ("First subject mark is %d\n",mark[0]);
//     printf ("Second subject mark is %d\n",mark[1]);
//     printf ("Third subject mark is %d\n",mark[2]);
//     printf("First subject mark = %d ,Second subject mark = %d ,Third subject mark = %d",mark[0],mark[1],mark[2]);
//     return 0;
// }

// write a program to enter price of 3-item & print their final cost with gst.

// #include<stdio.h>

// int main()
// {
//     float price[3];
//     printf("Enter a three price : ");
//     scanf("%f",&price[0]);
//     printf("Enter a 2nd price : ");
//     scanf("%f",&price[1]);
//     printf("Enter a third price : ");
//     scanf("%f",&price[2]);
    
//     printf("total 1st price = %f\n",(price[0]+(0.18*price[0])));
//     printf("total 2nd price = %f\n",(price[1]+(0.18*price[1])));
//     printf("total 3rd price = %f\n",(price[2]+(0.18*price[2])));
//     return 0;
// }

// other way se bhi hum 3 student ka mark store kar sakata ho 

#include<stdio.h>

int main()
{
   int m;
   printf("enter subject : ");
   scanf("%d", &m);
   int mark[m];
   for(int i = 0; i < m; i++)
   {
     printf("mark[%d]",i);
     scanf("%d", &mark[i]);
   }
   printf("the mark of %d student is : \n");
   for(int i = 0; i < m; i++)
   {
     printf("%d",mark[i]);
   }
   return 0;
}

