#include <stdio.h>
#include <conio.h>

int main()
{
    // using continue to skip something

    int i = 1;
    while (i < 10)
    {
        i++;
        if (i == 5)
        {
            continue;
        }
        else
        {
            printf("the value of i is %d\n", i);
        }
    }
    return 0;
}