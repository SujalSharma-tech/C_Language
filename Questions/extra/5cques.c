#include <stdio.h>
#include <conio.h>
void temp(float n);
int main()
{

    float tem;
    printf("Enter temp in celcius: ");
    scanf("%f", &tem);
    temp(tem);

    return 0;
}

void temp(float n)
{
    if (n < 34 && n >= 26)
    {
        printf("little bit hot");
    }
    else if (n >= 34 && n < 40)
    {
        printf("its hot outside");
    }
    else if (n >= 40)
    {
        printf("its extremely hot outside");
    }
    else if (n <= 24 && n > 16)
    {
        printf("little bit cold");
    }
    else if (n <= 16 && n > 8)
    {
        printf("its cold outside");
    }
    else if (n <= 8)
    {
        printf("its extremely cold outside");
    }
}