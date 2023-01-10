#include <stdio.h>
#include <conio.h>
void calc(int *a, int *b, int *sum, float *avg);
int main()
{

    int a = 10, b = 20, sum;
    float avg;
    calc(&a, &b, &sum, &avg);
    printf("the sum of %d and %d is %d\n", a, b, sum);
    printf("the avg of %d and %d is %.2f", a, b, avg);

    return 0;
}

void calc(int *a, int *b, int *sum, float *avg)
{

    *sum = (*a) + (*b);
    *avg = ((*a) + (*b)) / 2;
}