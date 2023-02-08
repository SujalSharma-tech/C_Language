#include <stdio.h>
#include <string.h>
int main()
{

    char dig[1000];
    gets(dig);
    int len = strlen(dig);
    int arr2[10] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < len; j++)
        {
            // printf("%d %d\n", arr2[i], dig[j]);
            if ((int)dig[j] == (int)arr2[i])
            {
                arr[i] += 1;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    // printf("%d", '3');

    return 0;
}
