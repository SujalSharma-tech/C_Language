#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle *tr, int n)
{
    double calc, calc2;
    for (int i = 0; i < n; i++)
    {
        double p = (tr[i].a + tr[i].b + tr[i].c) / 2;
        calc = p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c);
        printf("%f", calc);
        calc2 = sqrt(calc);
        printf("%.2f\n", calc2);
    }
    printf("%d %d %d", tr[0].a, tr[0].b, tr[0].c);
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++)
    {
        // printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}