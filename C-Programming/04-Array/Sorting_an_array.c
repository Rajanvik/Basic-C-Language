#include<stdio.h>

int main()    
{    
    int i, j,temp;     
    int a[7] = { 10, 9, 7, 101, 23, 44, 12};     
    for(i = 0; i<7; i++)    
    {    
        for(j = i+1; j<7; j++)    
        {    
            if(a[j] > a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }  
        }     
    }     
    printf("Printing Sorted Element List ...\n");    
    for(i = 0; i<7; i++)    
    {    
        printf("%d\n",a[i]);    
    }   
	return 0;
}