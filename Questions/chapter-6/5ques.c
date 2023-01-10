#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 5;
    int *j = &i;
    int **k = &j;
    printf("the valus of i is %d", **k);
    return 0;
}