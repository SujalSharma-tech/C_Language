#include <stdio.h>
#include <conio.h>

int main()
{
    int rating;
    printf("Enter rating between 1-5: ");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("rating is 1");
        break;
    case 2:
        printf("rating is 2");
        break;
    case 3:
        printf("rating is 3");
        break;
    case 4:
        printf("rating is 4");
        break;
    case 5:
        printf("rating is 5");
        break;
    default:
        printf("Invalid");
        break;
    }
    return 0;
}