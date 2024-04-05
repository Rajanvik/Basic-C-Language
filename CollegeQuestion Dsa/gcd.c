#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter a First Number : ");
    scanf("%d", &a);
    printf("Enter a second Number : ");
    scanf("%d", &b);
    int ans = greatestCommonDivisor(a, b);
    printf("Use Euclid's algorithm the GCD = %d",ans);
    return 0;
}
int  greatestCommonDivisor(int a, int b)
{
    if(b == 0) 
     return a;

    return greatestCommonDivisor(b, a % b);
}