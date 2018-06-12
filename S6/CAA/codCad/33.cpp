#include <cstdio>

using namespace std;

int main() {
    int n, m1[101][101], m2[101][101];
    scanf("%d", &n);
    

    for (int i = 0; i < n; i++) for (int j = 0; j < n; scanf("%d", &m1[i][j++]));

    for (int i = 0; i < n; i++) for (int j = 0; j < n; scanf("%d", &m2[i][j++]));

    int soma;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            soma = m1[i][j] + m2[i][j];
            printf("%d%s", soma, j < n - 1 ? " " : "\n");
        }
    }
    return 0;
}