#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int a = 18;
    int b = 6;
    int c = 3;
    printf("The value of a + b is: %d \n", a + b);
    printf("The value of a - b is: %d \n", a - b);
    printf("The value of a * b is: %d \n", a * b);
    printf("The value of a / b is: %d \n", a / b);

    // for exponential

    printf("the value of 4 to power 5 is: %f \n", pow(4, 5));

    // adding int and float

    printf("the sum of 5 + 5 is %d \n", 5 + 5);
    printf("the sum of 5 + 5.4 is : %f \n", 5 + 5.4);

    float k = 3.0 / 9;
    printf("the value of k is %f \n", k);
    printf("the value of k is %d \n", k);
    return 0;
}