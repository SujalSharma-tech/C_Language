#include <stdio.h>

int main()
{
    // reverse of number

    int n = 121;
    int temp = n;
    int rev = 0;

    while (temp != 0)
    {
        int a = temp % 10;
        rev = (rev * 10) + a;
        temp = temp / 10;
    }
    printf("%d\n", rev);

    // palidrome check

    if (n == rev)
    {
        printf("palidrome\n");
    }
    else
    {
        printf("not palidrome\n");
    }
    return 0;
}