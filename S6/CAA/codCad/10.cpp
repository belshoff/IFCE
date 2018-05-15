#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char op;
    double x, y;

    scanf("%c %lf %lf", &op, &x, &y);

    printf("%.2lf\n", op == 'M' ? x*y : x/y);
    return 0;
}