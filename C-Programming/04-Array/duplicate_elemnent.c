
// //5. Write a program in C to print duplicates elements and count a total number of duplicate elements in an array.

// #include<stdio.h>

// int main()
// {
// 	int size;
// 	printf("enter a size : ");
// 	scanf("%d",&size);
// 	int a[size];
// 	printf("\nEnter array element : \n");
// 	for(int i=0;i<size;i++)
// 	{
// 		printf("element %d- : ",i);
// 		scanf("%d",&a[i]);
// 	}

//     int count=0;

// 	for(int i=0;i<size-1;i++)
// 	{
// 		for(int j=i+1;j<size;j++)
// 		{
//           if((a[i]==a[j])&&(i!=j))
// 		  {
// 			  printf("dublicates elemnet is %d",a[j]);
// 			  printf("\n");
// 			  count++;
// 		  }
// 		}
	
// 	}
//     printf("The total number of duplicate elements found in the array is: %d", count);
// 	return 0;
// }


//5. Write a program in C to print duplicates elements and count a total number of duplicate elements and remove dublicates element in an array.

#include<stdio.h>

int main()
{
	int size;
	printf("enter a size : ");
	scanf("%d",&size);
	int a[size];
	printf("\nEnter array element : \n");
	for(int i=0;i<size;i++)
	{
		printf("element %d- : ",i);
		scanf("%d",&a[i]);
	}

    int count=0;

	for(int i=0;i<size-1;i++)
	{
		for(int j=i+1;j<size;j++)
		{

           if((a[i]==a[j])&&(i!=j))
          {
          	printf("dublicates elemnet is %d",a[j]);
			printf("\n");
			count++;
            for(int k=j;k<size-1;k++)
            {
                a[k]=a[k+1];
            }
            size--;
          }
		}
	
	}
    printf("The total number of duplicate elements found in the array is: %d\n", count);
    printf("after remove dublicate element and new array is : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
	return 0;
}