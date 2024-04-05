#include<stdio.h>

 int main()
 {
    int row,coulmn;

    printf("Row : ");
    scanf("%d",&row);

	printf("column : ");	   
    scanf("%d",&coulmn);
    int a[row][coulmn],b[row][coulmn];

    printf("enter a row and coulmn element :\n");

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<coulmn;j++)
         {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
         }
    }              

    printf("first matrix element is : \n");
             
    for(int i=0;i<row;i++)
    {	
       for(int j=0;j<coulmn;j++)
        {
            printf("%d  ",a[i][j]);
        }
		printf("\n");
    }

	printf("enter a row and coulmn element :\n");   

	for(int i=0;i<row;i++)
    {
        for(int j=0;j<coulmn;j++)
         {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
         }
    } 

	printf("second matrix element is : \n");
             
    for(int i=0;i<row;i++)
    {	
       for(int j=0;j<coulmn;j++)
        {
            printf("%d  ",b[i][j]);
        }
		printf("\n");
    }        
                                                  
    return 0;
   
 }                                                              


