#include <stdio.h>
#include <string.h>
int main()
{

    typedef struct Bikes
    {
        int max_speed;
        char Name[15];
        int alloy_size;
        int cc;
    } Bikes;

    typedef struct SuperBikes
    {
        Bikes normal; // Nesting of structure Bikes
        char Spcial[15];
        int super_speed;
    } SuperBikes;

    SuperBikes b1;

    b1.super_speed = 450;

    b1.normal.cc = 600;
    b1.normal.alloy_size = 24;

    strcpy(b1.normal.Name, "Kawasaki");

    printf("%d\n", b1.super_speed);
    printf("%d\n", b1.normal.cc);
    printf("%s\n", b1.normal.Name);

    return 0;
}