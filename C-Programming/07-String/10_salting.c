/* jab hum hacking karte hai n password secure kiye jate hai hamare company ke andar 
   password jis tarah se secure rahate hai us technic ko hum Salting kahete hai.   */ 

/*Salt hamara ek aisa string hota hai jisko hum normal password password ke andar dal date
  or kahi randomly bhi dal date hai.wo campony decide karta hai  */

/*
Question-->Find the salted form of a password entered by user if the salt is "123" & added at the end.
*/

#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main()
{
	char password[100];
	printf("enter your password string form : ");
	scanf("%s",password);
	salting(password);
}
void salting(char password[]) 
{
	char salt[]="123";
	char newPassword[200];

	strcpy(newPassword,password);  // newPassword="rajkapur"
	strcat(newPassword,salt);      // newPassword="rajkapur"+"123"
	printf("New Password is %s",newPassword);
}

// Output :-

// enter your password string form : rajkapur
// New Password is rajkapur123
