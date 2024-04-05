// ::  example

// "r" ---> for reading the file
// if file does not exist then null is returned

// "w" ---> for writing in the file 
// if file exists then contents of the file are overwritten

// "a" ---> for appanding in the file (writing at the end of the file)
// if file does not exist then a new file is created

// Two types of file formats:

    // (1) text files (.txt), .c)
    // (2) binary files(files which cannot be opened by text editors) 


// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int roll,roll2;
//     FILE *f = fopen("sample2.txt","r");
//     //  for reading the file    
    
//     // fscanf(f,"%d",&roll);
//     // printf("%d\n",roll);

//     fscanf(f,"%d %d",&roll,&roll2);
//     // fscanf(<pointer of file>,<format specifier>,<address of variable>)

//     fclose(f);


//     printf("%d %d\n",roll,roll2);

//     return 0;
// }



#include<stdio.h>
#include<stdlib.h>

int main()
{
    int roll,roll2;
    // FILE *f = fopen("sample2.txt","r");
    FILE *f = fopen("sample3.txt","r");  // sample3 is not present in the files
    //  for reading the file    

    if(f==NULL)
    {
        printf("File does not exist!!");
        return 0;
    }
    fscanf(f,"%d %d",&roll,&roll2);
    // fscanf(<pointer of file>,<format specifier>,<address of variable>)

    fclose(f);
    

    printf("%d %d\n",roll,roll2);

    return 0;
}