#include <stdio.h>
int main()
{

    float area, r;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    area = 3.141 * r * r;
    printf("Area of circle is: %.2f", area);
    return 0;
}