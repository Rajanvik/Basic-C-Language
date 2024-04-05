#include<stdio.h>

void display(int a){
    printf("\n%d", a);
}

int main(){
    int a = 5;
    int b = sizeof(--a);
    printf("%d,%d", a, b);
    display(a--);
    display(a);

    return 0;
}