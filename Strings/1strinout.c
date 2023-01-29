#include <stdio.h>
#include <strings.h>
int main()
{

    // input methods

    char str[20];

    // scanf("%s", str);
    scanf("%[^\n]s", str);
    // printing

    puts(str);
    printf("%s", str);
    return 0;
}