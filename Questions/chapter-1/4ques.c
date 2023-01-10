#include <stdio.h>
int main()
{

    float si, p, r, t;
    printf("Enter rate: ");
    scanf("%f", &p);
    printf("Enter principle: ");
    scanf("%f", &p);
    printf("Enter time: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;
    printf("The SI is: %f", si);
    return 0;
}