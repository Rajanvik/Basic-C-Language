/*Given a string S. Two operations R(s) and L(s) are defined as- R(s): Shifting all the characters of 
the string to one step Right L(s): Shifting all the characters of the string to one step Left.
Print 1 if R(s)=L(s) else print 0. STR=CODING **R(STR)=CODIN L(STR)=ODING**  */


#include <stdio.h>
#include <string.h>

int main () {
    char s1[100], s2[100];
    fgets(s1, 100, stdin);
    int size = strlen(s1) - 1;
    for (int i = 0; i < size - 1; i++) {
        s2[i] = s1[i + 1];
    }
    s2[size - 1] = '\0';
    s1[size - 1] = '\0';
    printf("%s\n", s1);
    printf("%s\n", s2);

    for(int i = 0; i < size - 1; i++) {
        if (s1[i] != s2[i]) {
            printf("0");
            return 0;
        } 
    }
    printf("1");
    return 0;
}