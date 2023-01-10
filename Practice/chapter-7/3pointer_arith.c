#include <stdio.h>
#include <conio.h>

int main()
{

    int a = 6;
    int *ptr = &a;

    printf("the value of ptr is %u\n", ptr);
    ptr++;
    printf("the value of ptr is %u\n", ptr);

    char c = 'a';
    char *ptr2 = &c;
    printf("the value of ptr2 is %u\n", ptr2);
    ptr2++;
    printf("the value of ptr2 is %u\n", ptr2);

    return 0;
}