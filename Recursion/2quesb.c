// print 1 to n using after rec call
#include <stdio.h>
#include <conio.h>
void increasing(int n)
{
    if (n == 0)
    {
        return;
    }
    increasing(n - 1);
    printf("%d\n", n);
    return;
}
int main()
{
    int n = 5;
    increasing(5);

    return 0;
}