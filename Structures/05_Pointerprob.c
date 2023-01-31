#include <stdio.h>
typedef int *Int_Pointer;
int main()
{

    int x = 5;
    int y = 7;
    // int *a = &x, b = &y; //this does not means int* a,int* b

    // To solve this problem we can use typedef

    Int_Pointer a = &x, b = &y;
    printf("%p\n", a);
    printf("%p\n", b);
    return 0;
}