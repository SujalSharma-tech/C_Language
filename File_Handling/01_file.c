#include <stdio.h>

typedef struct toll
{
    char name[10];
    char vehicle[10];
    char time[10];
} toll;
int main()
{
    toll new[5];
    FILE *fileptr;

    fileptr = fopen("test.txt", "r");

    // for (int i = 0; i < 2; i++)
    // {
    //     printf("Enter owner name: ");
    //     scanf("%s", new[i].name);
    //     printf("Enter owner vehicle name: ");
    //     scanf("%s", new[i].vehicle);
    //     printf("Enter time: ");
    //     scanf("%s", new[i].time);
    //     fwrite(&new[i], sizeof(toll), 1, fileptr);
    // }
    while (fread(&new, sizeof(toll), 1, fileptr))
    {
        printf("%s\t%s\t%s\n", new->name, new->vehicle, new->time);
    }
    fclose(fileptr);
    return 0;
}