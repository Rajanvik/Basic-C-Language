#include<stdio.h>

void display(float a,float b,float *sum,float *prod,float *avg);

int main()
{
	float a,b,sum,prod,avg;
	printf("enter a two no. \n");
	scanf("%f%f",&a,&b);
	display(a,b,&sum,&prod,&avg);
	printf("sum = %f\n",sum);
	printf("product = %f\n",prod);
	printf("average = %f\n",avg);
	return 0;
}
void display(float a,float b,float *sum,float *prod,float *avg)
{
	*sum=a+b;
	*prod=a*b;
	*avg=(a+b)/2;
}