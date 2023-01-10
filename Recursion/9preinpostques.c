#include <stdio.h>
#include <conio.h>
void pip_pattern(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d", n);
    pip_pattern(n - 1);
    printf("%d", n);
    pip_pattern(n - 1);
    printf("%d", n);
    return;
}
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    pip_pattern(n);

    return 0;
}