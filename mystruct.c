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
    struct _person p = {"sudachi", 'M', 100, 123.45, 987.65};
    printf("p: %p, p.name: %s, p.sex: %c, p.age: %d, p.height: %f, p.weight: %f\n", p, p.name, p.sex, p.age, p.height, p.weight);

    return 0;
}
