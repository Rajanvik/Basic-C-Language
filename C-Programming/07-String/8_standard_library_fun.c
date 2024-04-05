// ::  Standard Libarary Function

// Example --> char str[];

// (1) strlen(str);    // Count number of characters excluding '\0'
// (2) strcpy(str);   // copies value of old string to new string
// (3) strcat(firstStr,secStr); // Concatenation first string with second string 
// (4) strcmp(firstStr,secStr);/* Compares Two String & return a value 
//                                (1)   0     --> String equal
// 							      (2)Positive --> First>Second (ASCII)
// 							      (3)Negative --> First<Second (ASCII)
//                              */
// (5) strlwr(str)         // Capital word ko convert kar dega Small word me (RAJAN-->rajan)
// (6) strupr(str)         // Small word ko convert kar dega Capital word me (rajan-->Rajan)


//:: (1)  strlr(str)


#include<stdio.h>
#include<string.h>

int main()
{
	char name[50];

    printf("enter your name : ");
	fgets(name,50,stdin);
    int length=strlen(name)-1;
	printf("The length of Name is : %d",length);

	return 0;
}   

//:: (2) strcpy(str)

// #include<stdio.h>
// #include<string.h>

// int main()
// {
// 	char oldname[50];
// 	char newname[50];

//     printf("enter your old name : ");
// 	fgets(oldname,50,stdin);
// 	printf("enter your new name : ");
// 	fgets(newname,50,stdin);
// 	strcpy(newname,oldname);
    
// 	printf("New Name = %s",newname);

// 	return 0;
// }   


//:: (3)  strcat(firstStr,secStr)

// #include<stdio.h>
// #include<string.h>

// int main()
// {
// 	char firstName[100];
// 	char secondName[50];
// #include<stdio.h>
// #include<string.h>

// int main()
// {
// 	char name[1000];
// 	puts("enter your Capital name : ");
// 	gets(name);
// 	printf("The string in lower case : %s",strlwr(name));

// 	return 0;
// }
//     printf("enter your first name : ");
// 	fgets(firstName,100,stdin);
// 	printf("enter your second name : ");
// 	fgets(secondName,50,stdin);
// 	strcat(firstName,secondName);
    
// 	printf("first Name :\n%s",firstName);

// 	return 0;
// }

//::  (4)  strcmp(firstStr,secStr)

// #include<stdio.h>
// #include<string.h>

// int main()
// {
// 	// char firstStr[]="Apple";
//     // char secStr[]="Banana";

//     //  printf("%d",strcmp(firstStr,secStr));   //((A->65)-(66<-B) = -1) Negative
//     //  printf("%d",strcmp(secStr,firstStr));   //((B->66)-(65<-A) = 1)  Positive

// 	//  char firstStr[]="HHA";
//     //  char secStr[]="HHB";  :r1358.84f0268-9-x86_64


// 	//  printf("%d",strcmp(firstStr,secStr));   //((A-65)-(66-B) = -1) Negative

// 	 char firstStr[]="HAJI";
//      char secStr[]="HAJI"; 

// 	 printf("%d",strcmp(firstStr,secStr));     //((A-66)-(66-A) = 0)
     
// 	 return 0;
// }

//::  (5) strlwr() 

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//    char name[100];
//    gets(name);
//    printf("%s",strlwr(name));

//    return 0;
// }

//:: (6) strupr()  

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//    char name[100];
//    gets(name);
//    printf("%s",strupr(name));

//    return 0;
// }