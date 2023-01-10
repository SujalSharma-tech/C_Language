#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 23;
    int *j = &i;
    int **k = &j; // pointer to a pointer

    printf("the value of i is %d\n", i);
    printf("the value of j is %d\n", *j);
    printf("the value of address of i is %u\n", &i);
    printf("the value of adress at j is %u\n", *(&j));
    printf("the value of j is %u\n", j);
    printf("the adress of j is %u\n", &j);
    printf("the adress of k is %u\n", &k);
    printf("the value of k is %u\n", **k);

    return 0;
}