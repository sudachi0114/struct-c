#include <stdio.h>

struct _person
{
    char name[20];
    char sex;
    int age;
    double height;
    double weight;
};


int main(void) {
    struct _person p;

    printf("%p\n", p);

    return 0;
}