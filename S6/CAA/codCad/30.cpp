#include <cstdio>
#include <cstdlib>

int main() {
    int len, c = 0;
    char gab[81], res[81];
    scanf("%d %s %s", &len, &gab[0], &res[0]);
    for(int i = 0; i < len; i++) if(gab[i] == res[i]) c++;
    printf("%d\n", c);
    return 0;
}
