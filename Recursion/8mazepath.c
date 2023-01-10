// find total number of ways in maze of nxm

#include <stdio.h>
#include <conio.h>

int maze(int cr, int cc, int er, int ec)
{

    int right = 0;
    int down = 0;

    if (cr == er && cc == ec)
    {
        return 1;
    }
    if (cr == er)
    {
        right += maze(cr, cc + 1, er, ec);
    }
    if (cc == ec)
    {
        down += maze(cr + 1, cc, er, ec);
    }
    else if (cr < er && cc < ec)
    {
        right += maze(cr, cc + 1, er, ec);
        down += maze(cr + 1, cc, er, ec);
    }

    int tot = right + down;
    return tot;
}

int main()
{

    int er = 3;
    int ec = 3;

    printf("%d", maze(1, 1, er, ec));

    return 0;
}