#include <stdio.h>

int main()
{
    int r1,c1;
    printf("enter a first row : ");
    scanf ("%d",&r1);
    printf("enter a first coulmn : ");
    scanf ("%d",&c1);
    int a[r1][c1];

    printf("enter a element fist row  and coulmn : \n");
    for(int i=0; i<r1; i++)
    {
        for (int j=0; j<c1; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }


    int r2,c2;
    printf("enter a 2nd row : ");
    scanf ("%d",&r2);   
    printf ("enter a 2nd coulmn : ");
     scanf ("%d",&c2); 
    int b[r1][c1];
   
    printf("enter a element second row  and coulmn : \n");
    for(int i=0; i<r2; i++)
    {
        for (int j=0; j<c2; j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("first matrix element is : \n");
    for(int i=0;i<r1;i++)
    {                          
        for(int j=0;j<c1;j++)
        {
          printf("%d  ",a[i][j]);
        }
        printf("\n");
    } 
    printf("second matrix element is : \n");
    for(int i=0;i<r2;i++)
    {                          
        for(int j=0;j<c2;j++)
        {
          printf("%d  ",b[i][j]);
        }
        printf("\n");
    }   
    if(c1!=r2)
    {
        printf("matrix can not multiply ");
    }
    else 
    {
      int d[r1][c2],sum;
      for(int i=0;i<r1;i++)
      {
        for(int j=0;j<c2;j++)
        {
            sum = 0;
            for(int k=0;k<r1;k++)
            {
                sum = sum +(a[i][k]*b[k][j]);
            }
            d[i][j] = sum;
         }
      }
      printf("multiplication of two matrix in array is :\n");
      for(int i=0;i<r1;i++)
      {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",d[i][j]);
        }
        printf("\n");
      } 
    } 
    return 0;
}