#include <stdio.h>
#include <conio.h>

int main()
{
    // executes do part atleast once even when the condition is false

    // program to print first n natural numbers
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}