//1. Write a C program to accept two integers and check whether they are equal or not
// #include<stdio.h>

// int main()
// {
// 	int number1;
// 	int number2;

// 	printf("\nenter a first number : ");
// 	scanf("%d",&number1);
// 	printf("\nenter a second number : ");
// 	scanf("%d",&number2);

// 	if(number1=number2)
// 	{
// 		printf("\nnumber1 or number2 are equal");
// 	}
// 	else
// 	{
// 		printf("\nnumber1 or number2 are not equal");
// 	}
// 	return 0;
// }


//2. Write a C program to check whether a given number is even or odd.

// #include<stdio.h>

// int main()
// {
// 	int number1;
// 	printf("\nenter a number : ");
// 	scanf("%d",&number1);

// 	if(number1%2==0)
// 	{
// 		printf("\n%d is an even integer",number1);
// 	}
// 	else
// 	{
// 		printf("\n%d is an odd integer",number1);
// 	}
// 	return 0;
// }

//3. Write a C program to check whether a given number is positive or negative.

// #include<stdio.h>

// int main()
// {
// 	int number1;
// 	printf("\nenter a number : ");
// 	scanf("%d",&number1);

// 	if(number1>=0)
// 	{
// 		printf("\n%d is an positive number",number1);
// 	}
// 	else
// 	{
// 		printf("\n%d is an negative number",number1);
// 	}
// 	return 0;
// }

//4. Write a C program to find whether a given year is a leap year or not.

// lOGIC :-(1) check year%4==0 , not divisible-->not leap year
//                      |
// 		(2) check year%100==0
// 		             |
// 	    (3) check year%400==0 ,not divisible-->not leap year
// 		             |			
// 					 leap year	 

// #include<stdio.h>

// int main()
// {
// 	int year;
// 	printf("enter a year : ");
// 	scanf("%d",&year);

// 	if(year%4==0)
// 	{
// 		if(year%100==0)
// 		{
// 			if(year%400==0)
// 			{
// 				printf("%d leap year",year);
// 			}
// 			else
// 			{
// 				printf("%d not a leap year",year);
// 			}
			
// 		}
// 		else
// 		{
// 			printf("%d leap year",year);
// 		}
		
// 	}
// 	else
// 	{
//        printf("%d not a leap year",year);
// 	}

// 	return 0;
// }

//5. Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.

// #include<stdio.h>

// int main()
// {
// 	int age;
// 	printf("enter a age : ");
// 	scanf("%d",&age);

// 	if(age>=18)
// 	{
// 		printf("Congratulation! You are eligible for casting your vote.");
// 	}
// 	else 
// 	{
// 		printf("You are not eligible for casting your vote.");
// 	}

// 	return 0;
// }



// #include <stdio.h>

// int main()
// {
//    int m,n;
//    printf("Input the  value of m :");
//    scanf("%d",&m);
//    if(m!=0)
//    {
//      if(m>0)
// 	   n=1;
//      else
// 	   n=-1;
//    }
//    else
//    {
//      n=0;
//    }
//    printf("The value of m = %d \n",m);
//    printf("The value of n = %d \n",n);
//    return 0;
// }

//(7) write a c program compaer three number and find maximum number is (using ternary operator) ?

// #include<stdio.h>

// int main()
// {
//   int a,b,c,max;
//   printf("enter a three num. : \n");
//   scanf("%d%d%d",&a,&b,&c);
//   max=(a>b?(a>c?a:c):(b>c?b:c));
//   printf("the larget number is %d",max);
//   return 0;
// }

// (8) write a c program to chek whether leap year or not (using ternary operator) ?

// #include<stdio.h>

// int main()
// {
//   int year;
//   printf("enter a year. : \n");
//   scanf("%d",&year);

//   printf((year%4==0?(year%100==0?(year%400==0?"leap year":"not leap year"):"leap year"):"not leap year"));
//   return 0;
// }

//(9) write a c program to check divsion

// #include<stdio.h>

// int main()
// {
//   int mark;
//   printf("enter a mark : \n");
//   scanf("%d",&mark);
//   printf(mark>=75?"*":(mark>=60?"1st div":(mark>=45?"2nd div":(mark>=35?"3rd div":"fail"))));
//   return 0;
// }

//(10) write a program to find whether a stuent has passed in all the 4 subject using conditional operator

// #include<stdio.h>

// int main()
// {
//    int math,chem,phy,hindi;
//    printf("Enter a math number : ");
//    scanf("%d",&math);
//    printf("Enter a chemistry number : ");
//    scanf("%d",&chem);
//    printf("Enter a physics number : ");
//    scanf("%d",&phy);
//    printf("Enter a hindi number : ");
//    scanf("%d",&hindi);
//    printf(((math>=50)&&(chem>=50)&&(phy>=50)&&(hindi>=50))?"the student passd in all subject":"the student not passd in all subject");

//    return 0;

// }

//(11) write a program to find whether a stuent a person is eligible to vote or not using conditional operator

// #include<stdio.h>

// int main()
// {
//   int age;
//   printf("enter a age : ");
//   scanf("%d",&age);
//   printf(age>=18?"the person is eligible for voting":"the person is not eligible for voting"); 
//   return 0;
// }

// (12) write a program factorial

// #include<stdio.h>

// int main()
// {
//   int n,f=1,temp;
//   printf("enter a number : ");
//   scanf("%d",&n);
//   temp=n;
//   while(n>0)
//   {
//     f=f*n;
//     n--;
//   }
//   printf("factirial of %d is %d",temp,f);
//   return 0;
// }

//(13) C Program to Check a Number is Perfect or Not

// #include<stdio.h>

// int main()
// {
//   int n,i,sum=0;
//   printf("enter a number : ");
//   scanf("%d",&n);
//   for(i=1;i<n;i++)
//   {
//     if(n%i==0)
//     {
//       sum=sum+i;
//     }
//   }
//   if(n=sum)
//   {
//     printf("%d is a perfect no.",n);
//   }
//   else
//   {
//     printf("%d is a not perfect no.",n); 
//   }
//   return 0;
// }

//(14) Prime Number Program in C

// #include<stdio.h>

// int main()
// {
//   int n,count=0,i,temp;
//   printf("enter a number : ");
//   scanf("%d",&n);
//   temp=n;
//   for(i=1;i<=n;i++)
//   {
//     if(n%i==0)
//     {
//       count++;
//     }
//   }
//   if(count==2)
//   {
//     printf("%d is a prime no.",temp);
//   }
//   else
//   {
//     printf("%d is a not prime no.",temp); 
//   }
//   return 0;
// }

//(15) doubt(strong number)

//  #include<stdio.h>

// int main()
//  {
//    int n,r,fact=1,temp,z=0;
//    printf("enter a number : ");
//    scanf("%d",&n);
//    temp=n;
//    while(n>0)
//    {
//      r=n%10;
//      for(int i=r;i>=1;i--)
//      {
//        fact=fact*i;
//      }
//      int fact=1;
//      z=z+fact;
//      n=n/10;

//    }
//    if(z==temp)
//    {
//      printf("%d is a strong no.",temp);
//    }
//      else
//    {
//      printf("%d is a not strong no.",temp); 
//    }
//   return 0;
// }

//(16) Program to print all prime numbers between two numbers in C


#include<stdio.h>

int main()
{
  int a,b;
  printf("enter a two number : \n");
  scanf("%d%d",&a,&b);

  for(int i=a;i<=b;i++)
  {
    int count=0;
    for(int j=1;j<=i;j++)
    {
      if(i%j==0)
      {
        count++;
      }
    }
    if(count==2)
    {
      printf("%d ",i);
    }
  }
 
  return 0;
}


