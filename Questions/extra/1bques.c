#include <stdio.h>
#include <math.h>

int main()
{

    // cube of number
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("cube of %d is : %d \n", n, n * n * n);
    printf("cube of %d is : %.f \n", n, pow(n, 3));

    return 0;
}