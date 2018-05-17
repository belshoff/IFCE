#include <cstdio>
#include <cstdlib>

int main(int argc, char const *argv[])
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%c\n", a == b ? (b == c ? '*' : 'C') : (b == c ? 'A' : 'B'));
    return 0;
}
