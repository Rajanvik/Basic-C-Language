#include<stdio.h>

void areaofsquare(int a);
void areaofcircle(int r);
void areaofrectangle(int l,int b);

int main()
{
    int a,r,l,b;
	printf("enter side : ");
	scanf("%d",&a);
	printf("enter radius : ");
	scanf("%d",&r);
	printf("enter length and beadth :\n");
	scanf("%d%d",&l,&b);

	areaofsquare(a);
	areaofcircle(r);
	areaofrectangle(l,b);

	return 0;
}
void areaofsquare(int a)
{
   int square=a*a;
   printf("\narea of square is %d",square);
}
void areaofcircle(int r)
{
 float circle=3.14*r*r;
 printf("\narea of square is %f",circle);
}
void areaofrectangle(int l,int b)
{
 int rectangle=l*b;
 printf("\narea of square is %d",rectangle);
}
