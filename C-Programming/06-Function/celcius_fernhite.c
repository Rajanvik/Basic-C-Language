#include<stdio.h>

float celciusfernhite(float c);

int main()
{
    float c;
	printf("enter a celcius value : ");
	scanf("%f",&c);
	float f=celciusfernhite(c);
	printf("farnehite : %f",f);
	return 0;
}
float celciusfernhite(float c)
{
    float f=(c*9/5)+32;
	return f;
}