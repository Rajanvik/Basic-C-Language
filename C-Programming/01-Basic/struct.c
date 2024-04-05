// using struture padding. 
#include<stdio.h>

struct tempStructure{
    int num;
    char a[5];
    int var;
    int y;
}l;

int main(){
    printf("\n Size of Structure = %d",sizeof(l));
    printf("\n\t Number = %d",sizeof(l.num));
    printf("\n\t Charecter Array = %d",sizeof(l.a));
    printf("\n\t var = %d",sizeof(l.var));
    printf("\n\t y = %d",sizeof(l.y));
    
}
// output :- 12


// withought using struture padding.
// #include<stdio.h>
// #pragma pack(1)

// struct tempStructure{
//     int num;
//     char a;
//     int var;
//     int y;
// }l;

// int main(){
//     printf("%d",sizeof(l));
// }

// output :- 9