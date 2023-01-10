#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 5;
    printf("value of i is %d\n", i++);
    printf("value of i after increment is %d\n", i);

    int j = 5;
    printf("value of j after increment is %d\n", ++j);
    printf("value of j after increment is %d", j);
    return 0;
}