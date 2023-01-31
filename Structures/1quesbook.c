#include <stdio.h>
#include <string.h>
int main()
{

    struct BookData
    {
        char str[30];
        int price;
        int no_pages;
    } Book1, book2;

    // Book1.str[] = "Intro to C PRogramming";  This initialisation cannot be done

    strcpy(Book1.str, "Introduction to Programming");
    Book1.price = 370;
    Book1.no_pages = 480;
    printf("Name of book 1 is : %s\n", Book1.str);
    printf("Price of Book 1 is %d\n", Book1.price);
    printf("Number of pages in book 1 are %d\n", Book1.no_pages);

    return 0;
}