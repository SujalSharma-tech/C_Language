// print 1 to n using recursion

#include <stdio.h>
#include <conio.h>
void increasing(int n, int a)
{
    if (n == a)
    {
        return;
    }
    printf("%d\n", a + 1);
    increasing(n, a + 1);
    return;
}
int main()
{

    int n = 5, a = 0;
    increasing(n, a);

    return 0;
}