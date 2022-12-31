#include <stdio.h>

struct _person
{
    char name[20];
    char sex;
    int age;
    double height;
    double weight;
};

typedef struct _person person_t;

int main(void) {
    struct _person p = {"sudachi", 'M', 100, 123.45, 987.65};
    printf("p: %p, p.name: %s, p.sex: %c, p.age: %d, p.height: %f, p.weight: %f\n", p, p.name, p.sex, p.age, p.height, p.weight);

    person_t pt = {"mikan", 'F', 200, 987.65, 123.45};
    printf("pt: %p, pt.name: %s, pt.sex: %c, pt.age: %d, pt.height: %f, pt.weight: %f\n", pt, pt.name, pt.sex, pt.age, pt.height, pt.weight);
    return 0;
}
