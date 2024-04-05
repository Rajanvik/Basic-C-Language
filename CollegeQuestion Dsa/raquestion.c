#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 
int board[20],count;
 
int main()
{
    int n,i,j;
    void queen(int row,int n);
    
    printf("\n :: N Queens Problem Using Backtracking ::");
    printf("\n\n\tEnter number of Queens:");
    scanf("%d",&n);
    queen(1,n);
    printf("\n\tNumber of solution: %d\n\n",count);
    return 0;
}
 
void print(int )
{
    int i,j;
    printf("\n\nSolution %d:\n\n",++count);
    
    printf("\t\t");
    for(i=1;i<=n;++i)
    {
        // printf("\t%d",i);
        printf(" _");
    }
    printf("\n\t\t");

    for(i=1;i<=n;++i)
    {
        // printf("\n\n%d",i);
        printf("|");
        for(j=1;j<=n;++j) 
        {
            if(board[i]==j)
                // printf("\tQ");
                printf("Q|");
            else
                printf("_|"); 
        }
        printf("\n\t\t");
    }
}

int place(int row,int column)
{
    int i;
    for(i=1;i<=row-1;++i)
    {
        if(board[i]==column)
           return 0;
        else
        {
            if(abs(board[i]-column)==abs(i-row))
               return 0;
        }
    }
    
    return 1;
}
 
void queen(int row,int n)
{
    int column;
    for(column=1;column<=n;++column)
    {
        if(place(row,column))
        {
            board[row]=column; 
            if(row==n)
                print(n); 
            else 
                queen(row+1,n);
        }
    }
}