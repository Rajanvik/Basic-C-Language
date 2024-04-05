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
// 		printf("element %d-",i);
// 		scanf("%d",&a[i]);
// 	}
// 	printf("\nthe array element is : ");
// 	for(int i=0;i<size;i++)
// 	{
// 		printf("%d " ,a[i]);
// 	}
// 	return 0;
// }

//2. Write a program in C to read n number of values in an array and display it in reverse order.

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
// 		printf("element %d-",i);
// 		scanf("%d",&a[i]);
// 	}
// 	printf("\nthe array element is : ");
// 	for(int i=size-1;i>=0;i--)
// 	{
// 	    printf("% 3d",a[i]);
// 	}

// 	return 0;
// }

//3. Write a program in C to find the sum of all elements of the array.

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
// 	int sum=0;
// 	for(int i=0;i<size;i++)
// 	{
// 	    sum=a[i]+sum;
// 	}
// 	printf("\nSum of all elements stored in the array is : %d",sum);

// 	return 0;
// }

//5. Write a program in C to count a total number of duplicate elements in an array.

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
		  }
		}
	
	}
    printf("The total number of duplicate elements found in the array is: %d", count);
	return 0;
}