#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    double res = a/b;
    printf("%.2lf\n", res);
    return 0;
}
