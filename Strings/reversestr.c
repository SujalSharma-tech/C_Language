#include <stdio.h>
#include <string.h>

void revstr(char str[], int n)
{

    int ct = n;

    for (int i = 0; i < (n / 2) + 1; i++)
    {
        int temp = str[i];
        str[i] = str[ct];
        str[ct] = temp;
        ct--;
    }
}

int strlenn(char str[])
{
    int i = 0;

    int count = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }

    return count;
}

int main()
{
    char str[20];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    int i = 0;
    int count = strlenn(str);
    revstr(str, count - 1);

    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }

    // printf("%s\n", str);

    return 0;
}
