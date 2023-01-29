#include <stdio.h>
#include <string.h>
int main()
{

    char str[] = "Hello World";

    char *newstr = "Hello There"; // this is read only or cannot change individual chars

    printf("%s\n", newstr);

    newstr = "New Value";
    printf("%s\n", newstr);

    return 0;
}