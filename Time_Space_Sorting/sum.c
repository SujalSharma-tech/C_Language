#include <stdio.h>

int main()
{
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // int *ptr = &arr[0];
    // int sum = 0;
    // for (int i = 0; i < 10; i++, ptr++)
    // {
    //     sum += *ptr;
    // }
    // printf("%d\n", sum);

    int n, n2;
    char o;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter second number: ");
    scanf("%d", &n2);

    printf("Enter a operator: ");
    scanf(" %c", &o);

    switch (o)
    {
    case '+':
        printf("Sum of digits are: %d\n", n + n2);
        break;
    case '-':
        printf("difference between digits are: %d\n", n - n2);
        break;
    case '*':
        printf("multiplication of digits are: %d\n", n * n2);
        break;
    case '/':
        printf("division of digits are: %d\n", n / n2);
        break;
    case '%':
        printf("modulas of digits are: %d\n", n % n2);
        break;
    default:
        printf("Enter valid operator");
        break;
    }

    return 0;
}