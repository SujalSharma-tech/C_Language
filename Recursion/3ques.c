// print decreasing-increasing from n

#include <stdio.h>
// #include <conio.h>

void inc_dec(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d\n", n);
    inc_dec(n - 1);
    printf("%d\n", n);
}
int main()
{
    int n = 5;
    inc_dec(n);

    return 0;
}