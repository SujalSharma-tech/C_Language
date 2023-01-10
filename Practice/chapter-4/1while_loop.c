#include <stdio.h>
#include <conio.h>

int main()
{
    int counter = 0;
    while (counter <= 20)
    {
        if (counter >= 10)
        {
            printf("%d\n", counter);
        }
        counter++;
    }
    return 0;
}