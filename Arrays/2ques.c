// print index of element less than 35

#include <stdio.h>

int main()
{
    int marks[5] = {34, 65, 22, 87, 56};

    for (int i = 0; i < 5; i++)
    {
        if (marks[i] < 35)
        {
            printf("array index is : %d\n", i);
        }
    }
}
