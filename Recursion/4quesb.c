// sum of 1 to n using parameter approach

#include <stdio.h>
#include <conio.h>

void sum(int a, int n)
{

    // if (n < a)
    // {
    //     return 0;
    // }
    // return a + sum(a + 1, n);

    // another approach

    if (n == 0)
    {
        printf("%d", a);
        return;
    }
    sum(a + n, n - 1);
    return;
}
int main()
{
    int n = 5, res = 0;
    sum(res, n);

    return 0;
}