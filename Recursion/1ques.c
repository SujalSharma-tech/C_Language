// print n to 1 using recursion

#include <stdio.h>
#include <conio.h>

void printn(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d\n", n);
    printn(n - 1);
    return;
}
int main()
{

    int n = 10;
    printn(n);

    return 0;
}