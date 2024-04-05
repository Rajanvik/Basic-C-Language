#include<stdio.h>

float percentage(float s,float m,float sa);

int main()
{
    float s,m,sa;

	printf("enter a mark of science : ");
	scanf("%f",&s);

	printf("enter a mark of math : ");
	scanf("%f",&m);

	printf("enter a mark of sanskrit : ");
	scanf("%f",&sa);

	printf("over all percentage : %f",percentage(s,m,sa));

	return 0;
}
float percentage(float s,float m,float sa)
{
	float avg=(s+m+sa)/3;
	return avg;
}