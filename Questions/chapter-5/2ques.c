#include <stdio.h>
#include <conio.h>
float temp(int cel);

int main()
{

    float n;
    printf("Enter temp in celcius: ");
    scanf("%f", &n);

    printf("the temp in fahrenheit is %.2f", temp(n));

    return 0;
}
float temp(int cel)
{

    return (cel * 1.8) + 32;
}