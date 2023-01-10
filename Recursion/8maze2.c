// less paramter approach

#include <stdio.h>
#include <conio.h>

int mazepath(int r, int c)
{

    int right = 0;
    int down = 0;
    if (r == 1 && c == 1)
    {
        return 1;
    }
    if (r == 1)
    {
        right += mazepath(r, c - 1);
    }
    if (c == 1)
    {
        down += mazepath(r - 1, c);
    }
    if (r > 1 && c > 1)
    {
        right += mazepath(r, c - 1);
        down += mazepath(r - 1, c);
    }
    return right + down;
}

int main()
{

    int r = 2;
    int c = 2;

    printf("%d", mazepath(r, c));

    return 0;
}