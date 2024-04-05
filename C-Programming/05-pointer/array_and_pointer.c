// :: Concept--1

// #include<stdio.h>

// int main()
// {
// 	int a[]={1,5,3,6,8};
// 	int *ptr;
//     ptr=&a[0];

//     printf("%d\n",a[0]);     // 1
// 	printf("%d\n",*ptr);     // 1

// 	printf("Post increament %d\n",*ptr++); // 1000-->1004
// 	printf("Pre Increament %d\n",*++ptr);   // 1004+4=1008
// 	printf("pre increament %d\n",++*ptr);    // *1008=3+1=4

//     ptr=&a[4];
// 	printf("%d\n",*ptr-1);                 //  7
// 	printf("%d\n",*(ptr-1));               //  6

//     return 0;

// }

//:: Uses 

#include<stdio.h>

void display(int *ptr);

int main()
{
	int a[]={4,8,5,6,7};
	display(a);

	return 0;
}
void display(int *ptr)
{  
    printf("\nThe array of element :");
    for(int i=0;i<5;i++)
     {
	   printf("%d\t",*(ptr+i));
     }
	printf("\nPost increament %d",*ptr++);//   1000-->1004   // Ans-4
	printf("\nPre Increament %d",*++ptr); //   1004+4=1008  // Ans-5
	printf("\npre increament %d",++*ptr); //   *1008       // Ans-6
	printf("\n%d",*ptr+1);                //   *1012+1=6+1
	printf("\n%d",*(ptr-1));              //   *(1008-1*4)=*104=8  

 }

