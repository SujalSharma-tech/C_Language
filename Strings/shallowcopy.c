#include <stdio.h>

int main()
{

    // shallow copy means the pointer is pointing to the same string and there is no new strings is created in the memory if any change is made

    char str[] = "College";
    char *ptr = str;

    str[0] = 'M';
    printf("%s", ptr);
    return 0;
}