#include <stdio.h>
#include <string.h>
int main()
{

    typedef struct Cricketers
    {
        char name[15];
        int age;
        int matches;
        float avg_runs;
    } Cricket;

    Cricket info[5]; // declaring array of structures

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Name of Player %d: ", i + 1);
        scanf(" %[^\n]%*c", info[i].name);
        printf("Enter age of player %d: ", i + 1);
        scanf("%d", &info[i].age);
        printf("Enter number of matches played by player %d :", i + 1);
        scanf("%d", &info[i].matches);
        printf("Enter average runs scores by player %d: ", i + 1);
        scanf("%f", &info[i].avg_runs);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Name of Player %d is %s\n", i + 1, info[i].name);
        printf("age of player %d is %d\n", i + 1, info[i].age);
        printf("number of matches played by player %d are %d\n", i + 1, info[i].matches);
        printf("average runs scores by player %d are %.2f\n", i + 1, info[i].avg_runs);
    }

    return 0;
}