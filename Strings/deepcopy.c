#include <stdio.h>

int main()
{
    // deepcopy is creating a new string which is not the same

    char *str = "HEllo";
    char *str2 = str;

    printf("%p\n", str);
    printf("%p\n", str2);
    return 0;
}