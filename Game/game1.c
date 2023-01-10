#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // guess the number game between 1-50

    srand(time(0));
    int random = rand() % 50;
    printf("%d\n", random);
    int opt, choice, guess = 0, times = 0;

    do
    {

        printf("Guess a number between 1-50: ");
        scanf("%d", &choice);

        if (choice == random)
        {
            guess += 1;
            times += 1;
            printf("you guessed the correct number\n");
            printf("Number of guesses are : %d\n", guess);
            printf("Number of times you played : %d\n", times);
            printf("do you want to play again? 1 for yes and 0 for no: ");
            scanf("%d", &opt);
            if (opt == 0)
            {
                printf("Thank you for playing :)");

                break;
            }
            else
            {
                random = rand() % 50;

                continue;
            }
        }
        else if (choice > random)
        {
            guess += 1;

            printf("Lower number please\n");
        }
        else if (choice < random)
        {
            guess += 1;

            printf("Higher number please\n");
        }
        else
        {
            printf("invalid choice\n");
        }

    } while (2 > 1);

    return 0;
}