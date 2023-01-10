#include <stdio.h>
#include <conio.h>

void display();

int main()
{
    printf("i am in main function\n");
    display();
    printf("again in main\n");
    return 0;
}

void display()
{
    printf("I am inside display function\n");
}