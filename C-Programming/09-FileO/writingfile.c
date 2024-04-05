#include<stdio.h>

int main()

{
    FILE *fptr = fopen("generated.txt", "w");
    int num=45;
    fprintf(fptr, "%d\n", num);
    fprintf(fptr, "Thanks for using fprintf!!!\n");
    fclose(fptr);

    return 0;
}