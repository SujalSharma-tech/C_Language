#include <stdio.h>

int main()
{

    char str[] = "Hello World";
    char *ptr = &str[0];

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}