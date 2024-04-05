:: example-1

#include<stdio.h>
#include<string.h>

struct student
{
	char name[100];
	int roll;
	float cgpa;
};

int main()
{
	struct student s1;
//	s1.name="Rajan"; // character pointer nahi hai ye. ye character array hai use directlly aise decleared nahi kar sakte hai hum.
	s1.roll=106;
	s1.cgpa=8.5;

	strcpy(s1.name,"Rajan");

	printf("student name is %s\n",s1.name);
	printf("student roll no. %d\n",s1.roll);
	printf("student cgpa %f",s1.cgpa);

	return 0;
}
// Output :-

// student name is Rajan
// student roll no. 106
// student cgpa 8.500000

// :: example-1

#include<stdio.h>
#include<string.h>

struct employee
{
	char name[100];
	int monthly;
	float salary;
};

int main()
{
	struct employee e1;
//	s1.name="Rajan";
	e1.monthly=1;
	e1.salary=40000;

	strcpy(e1.name,"Rajan");

	printf("employee name is %s\n",e1.name);
	printf("employee montly. %d\n",e1.monthly);
	printf("employee %d month salary is %f",e1.monthly,e1.salary);

	return 0;
}

// Output :-

// employee name is Rajan
// employee montly. 1
// employee 1 month salary is 40000.000000