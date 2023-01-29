#include <stdio.h>
#include <string.h>
int main()
{
    // insert an element on the given index

    char str[9] = "College";
    int len = strlen(str);

    char ele = 'm';
    int ind = 0;

    for (int i = len; i >= 0; i--)
    {
        if (i == ind)
        {
            str[i] = ele;
            break;
        }
        str[i] = str[i - 1];
    }

    printf("%s\n", str);

    return 0;
}