#include<stdio.h>
#include<stdlib.h>

int checkMax(int a[],int b[],int size,int key)
{
    int k,sum=0;
    int max = 0;
    for(int i=0;i<size;i++){
		if(abs(b[i])>max){
			max=abs(b[i]);
            k = i;
        }
    }
    if(a[k]<0){
        a[k]=a[k]+key*2;
    }
    else{
       a[k]=a[k]-key*2; 
    }
    for (int i=0; i<size; i++){
        sum = sum + a[i]*b[i];
    }
    return sum;
}

int main()
{
    int size,key;
    scanf("%d%d", &size,&key);
    int a[size],b[size];
    for (int i = 0; i <size; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <size; i++){
        scanf("%d", &b[i]);
    }
    int n = checkMax(a,b,size,key);
    printf("%d",n);
    return 0;
}

// Output :-

// 5 3
// 2 3 4 5 4
// 3 4 2 3 2
// 25

// 3 5 
// 1 2 -3
// -2 3 -5
// -31