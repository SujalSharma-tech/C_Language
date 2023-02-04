#include <stdio.h>
typedef struct person
{
    int age;
    float weight;
} person;

int main()
{

    person p1, p2;
    p1.age = 22;
    p1.weight = 55;
    p2.age = 17;
    p2.weight = 30;

    int *ptr = &p1.age;
    float *ptr2 = &p1.weight;
    int *ptr3 = &p2.age;
    float *ptr4 = &p2.weight;

    printf("age of person 1 is %d\n", *ptr);
    printf("weight of person 1 is %f\n", *ptr2);
    printf("age of person 2 is %d\n", *ptr3);
    printf("weight of person 2 is %f\n", *ptr4);

    return 0;
}