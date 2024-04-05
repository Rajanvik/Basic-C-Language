// #include<stdio.h>

// int main()
// {
// 	int *p,*q,*r;       // un-inalised pointer-->wild pointer
// 	printf("\nGarbauage Value %d",p);
// 	printf("\nGarbauage Value %d",q);
// 	printf("\nGarbauage Value %d",r);
// 	return 0;
// }

// :: Continouges Memory Location Print Hoga(NORMAL POINTER)

#include<stdio.h>

int main()
{
	int a,b,c,*p,*q,*r; 
	p=&a;
	q=&b;
    r=&c;
	printf("\np=%d",p);
	printf("\nq=%d",q);
	printf("\nr=%d",r);

	return 0;
}

