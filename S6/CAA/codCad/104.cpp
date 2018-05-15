#include <cstdio>
#include <cstdlib>

int answ(int a, int b, int c) {
    return (a + b == c || a + c == b || b + c == a) || (a == b || a == c || b == c);
}

int main(int argc, char const *argv[])
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf(answ(a, b, c) ? "S\n" : "N\n");
    return 0;
}
