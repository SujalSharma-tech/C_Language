#include <stdio.h>
#include <conio.h>

void goodmorning();
void goodevening();
void goodnight();

int main()
{

    goodmorning();

    return 0;
}

void goodmorning()
{
    printf("good morning\n");
    goodevening();
}
void goodevening()
{
    printf("good evening\n");
    goodnight();
}
void goodnight()
{
    printf("good night\n");
}