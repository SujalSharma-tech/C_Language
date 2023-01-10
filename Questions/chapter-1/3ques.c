#include <stdio.h>
int main()
{

    float deg, c;
    printf("Enter temperature in celcius: ");
    scanf("%f", &c);

    deg = (1.8 * c) + 32;

    printf("Temperature in fahrenheit: %f", deg);
}