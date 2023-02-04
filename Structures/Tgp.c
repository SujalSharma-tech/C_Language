#include <stdio.h>

int main()
{
    int subs;

    printf("Enter Number of Subjects: ");
    scanf("%d", &subs);
    int credits[subs];
    float marks[subs];
    for (int i = 0; i < subs; i++)
    {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        printf("Enter credits for subject %d: ", i + 1);
        scanf("%d", &credits[i]);
    }

    float calc;
    int tot_credits;
    for (int i = 0; i < subs; i++)
    {
        tot_credits += credits[i];
    }

    for (int i = 0; i < subs; i++)
    {
        if (marks[i] > 90)
        {
            calc += (10 * credits[i]);
        }
        else if (marks[i] <= 90 && marks[i] > 70)
        {
            calc += (9 * credits[i]);
        }
        else if (marks[i] <= 70 && marks[i] > 60)
        {
            calc += (8 * credits[i]);
        }
        else if (marks[i] <= 70 && marks[i] > 60)
        {
            calc += (7 * credits[i]);
        }
    }

    printf("Your Tgpa is %.2f\n", calc / tot_credits);
    return 0;
}