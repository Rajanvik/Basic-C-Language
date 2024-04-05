# include <stdio.h>
# include <stdlib.h>

struct student {
    int age;
    int marks;
    int roll;
};

int main() {
    struct student * Majan = malloc(sizeof(struct student));

    return 0;
}