//:: example-> 1

// #include<stdio.h>

// int main()
// {
//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// output :-
// 0
// 1
// 2

//:: example-> 2

// #include<stdio.h>

// int main()
// {
//     int i = 0;
//    // int i;
//     for (; i < 3; i++)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// output :-
// 0
// 1
// 2

//:: example-> 3

// #include<stdio.h>

// int main()
// {
//     for (int i=0,j=0; i < 3; i++)
//     {
//         printf("%d\t%d\n", i,j);
//     }
//     return 0;
// }

// output :-
// 0       0
// 1       0
// 2       0

// :: example-> 4

// #include<stdio.h>

// int main()
// {
//     for (int i=1,j=0; i <= 7,j < 3;i++,j++)
//     {
//         printf("%d\t%d\n", i,j);
//     }
//     return 0;
// }

// j --> is Termination condtions

// output :-

// 1       0
// 2       1
// 3       2

//:: example-> 5

// #include<stdio.h>

// int main()
// {
//     for (int i=1,j=0; i <= 7,j < 3;)
//     {
//         printf("%d\t%d\n", i,j);
//     }
//     return 0;
// }

// output :-

// infinite loop becuse condition is always true
// 1<=7 --> true ,0<3 --> true

// 1      0   ---> print infinite time


// #include<stdio.h>

// int main()
// {
//     for (int i=1,j=0; i <= 7,j < 3;)
//     {
//         printf("%d\t%d\n", i,j);
//         i++;
//     }
//     return 0;
// }

// output :-
// j --> yani termination condition true hai 
// hemesa is liye infinte print hoga
// infinite  --> doubt


// #include<stdio.h>

// int main()
// {
//     for (int i=1,j=0; i <= 7,j < 3;)
//     {
//         printf("%d\t%d\n", i,j);
//         j++;
//     }
//     return 0;
// }

// Output :-

// 1       0
// 1       1
// 1       2


// #include<stdio.h>

// int main()
// {
//     for (int i=1,j=0; i == 10,j < 3;i++,j++)
//     {
//         printf("%d\t%d\n", i,j);
//     }
//     return 0;
// } doubt


// #include<stdio.h>

// int main()
// {
//     for (int i=1,j=0; i <= 5 && j < 3;i++,j++)
//     {
//         printf("%d\t%d\n", i,j);
//     }
//     return 0;
// }

// output :-

// 1       0
// 2       1
// 3       2

// #include<stdio.h>

// int main()
// {
//     for (int i=1,j=0; i <= 5 || j < 3;i++,j++)
//     {
//         printf("%d\t%d\n", i,j);
//     }
//     return 0;
// }

// output :-

// 1       0
// 2       1
// 3       2
// 4       3
// 5       4

// #include<stdio.h>

// int main()
// {
//     for (;;)
//     {
//         printf("Rajan Kumar\n");
//     }
//     return 0;
// }

// output :-

// Rajan Kumar ---> infinite time print 


#include<stdio.h>

int main()
{
    int i=1;
    for (;i<=3;i++)
    {
        printf("Rajan Kumar\n");
    }
    return 0;
}

// output :-

// Rajan Kumar
// Rajan Kumar
// Rajan Kumar
