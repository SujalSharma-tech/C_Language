#include <stdio.h>

int main()
{
    typedef struct Books
    {
        int name[50];
        int pages;
        int price;
    } Book; // Book refers to the name which will replce struct Books{}

    Book A; // no need to write struct again and again due to typedef
    Book B;
    Book C;

    A.pages = 159;
    C.price = 600;

    printf("%d\n", A.pages);
    printf("%d\n", C.price);
    return 0;
}