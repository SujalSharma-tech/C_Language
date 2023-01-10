#include <stdio.h>
#include <conio.h>
// call by ref means passing address of variable as arguments
void swap(int *a, int *b);
int main()
{
    int a = 2, b = 7;
    printf("the valus of a is %d and b is %d\n", a, b);
    swap(&a, &b);
    printf("the valus of a is %d and b is %d", a, b);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}