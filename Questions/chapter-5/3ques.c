#include <stdio.h>
#include <conio.h>
float force(float m);
int main()
{

    float m = 23.2;
    printf("force exerted in body is : %.2f", force(m));

    return 0;
}

float force(float m)
{
    return m * 9.8;
}