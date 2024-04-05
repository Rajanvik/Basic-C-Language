//    :: What is Array Of pointers ?

// Ans-->It is collection of pointer in the array is called array of pointer.


// #include<stdio.h>
// #include<string.h>

// int main()
// {
// 	//s is a array of pointers
// 	char *s[]={
// 		         "gate",
// 				 "gatemashers",
// 				 "varun",
// 				 "trending"
// 	           };

	         
// 	printf("string=%s\n",*s+1);
// 	printf("string=%s\n",*(s+2));
// 	printf("string=%s\n",(*(s+1)+4));
	  

// 	return 0;
// }

//:: Concept--2

#include<stdio.h>

int main()
{
	int a[]={ 8 , 7 , 6 , 5 };
    int *ptr;

    for(int i=0;i<4;i++)
	{
		ptr=&a[i];
	}
	printf("The array of element :\n");
	for(int i=0;i<4;i++)
	{
		printf("%d\t",a[i]);
	}
   
   return 0;

}