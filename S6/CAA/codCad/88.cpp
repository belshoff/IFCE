#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

typedef struct {
    int tempo;
    int pos;
} Nadador;

int main(int argc, char const *argv[])
{
    Nadador n1, n2, n3;
    scanf("%d %d %d", &n1.tempo, &n2.tempo, &n3.tempo);
    n1.pos = n1.tempo > n2.tempo ? (n1.tempo > n3.tempo ? 1 : 2) : n1.tempo > n3.tempo ? 2 : 3;
    n2.pos = n2.tempo > n1.tempo ? (n2.tempo > n3.tempo ? 1 : 2) : n2.tempo > n3.tempo ? 2 : 3;
    n3.pos = n3.tempo > n1.tempo ? (n3.tempo > n2.tempo ? 1 : 2) : n3.tempo > n2.tempo ? 2 : 3;
    printf("%d\n%d\n%d\n", n1.pos, n2.pos, n3.pos);
    return 0;
}
