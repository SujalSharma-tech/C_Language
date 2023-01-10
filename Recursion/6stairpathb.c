#include <stdio.h>
#include <conio.h>

int path(int n)
{
    // if (n == 1)
    // {
    //     return 1;
    // }
    // else if (n == 2)
    // {
    //     return 2;
    // }
    // else if (n == 3)
    // {
    //     return 4;
    // }
    if (n == 0)
    {
        return 1;
    }
    else if (n < 0)
    {
        return 0;
    }
    int ans1 = path(n - 1);
    int ans2 = path(n - 2);
    int ans3 = path(n - 3);
    return ans1 + ans2 + ans3;
}
int main()
{
    int n = 4;
    printf("%d", path(n));

    return 0;
}