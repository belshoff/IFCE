#include <cstdio>
#include <cstdlib>

int main(int argc, char const *argv[])
{
    int n, count = 0, last, aux, max = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &aux);
        if(count == 0) {
            ++count;
            last = aux;
        } else {
            if(aux == last) ++count;
            else count = 1;
            last = aux;
        }
        max = count > max ? count : max;
    }
    printf("%d\n", max);
    return 0;
}