#include<stdio.h>

int main()
{
    for(int i=10 ;i>=1;i--)
    {
        for (int j=1 ;j<i ; j++)
        {
            printf(" ");
        }
        for(int k=10;k>=i ;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// Output :-

//          *
//         **
//        ***
//       ****
//      *****
//     ******
//    *******
//   ********
//  *********
// **********