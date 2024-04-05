#include<stdio.h>

int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=n/2+1;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
