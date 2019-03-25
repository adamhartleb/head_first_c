#include <stdio.h>

typedef union {
    int male;
    int female;
} gender;

typedef struct {
    int age;
    char* name;
    gender sex;
} person;


void sayName(person* p)
{
    printf("My name is %s and I am %d", p->name, p->sex);
}

int main()
{
    person me = { 28, "Adam", { .female=1 } };
    sayName(&me);
}