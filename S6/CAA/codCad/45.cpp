// #include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct Piloto {
    int id;
    int pontos = 0;
};

bool ordenar(Piloto p1, Piloto p2) {
    return (p1.pontos > p2.pontos)||(p1.pontos == p2.pontos&&p1.id<p2.id);
}

int main() {
    while (true) {
        int g, p;
        scanf("%d %d", &g, &p);
        if (g == 0 and p == 0) {
            break;
        }
        Piloto vp[p];
        Piloto original[p];
        int corridas[g][p];
        for (int i = 0; i < g; i++) {
            for (int j = 0; j < p; j++) {
                scanf("%d", &corridas[i][j]);
                if (i == 0) {
                    vp[j].id = j + 1;
                    original[j].id = j + 1;
                }
            }
        }
        int s;
        scanf("%d", &s);
        for (int i = 0; i < s; i++) {
            int k;
            scanf("%d", &k);
            for (int j = 0; j < p; j++) {
                vp[j] = original[j];
            }
            int negosseos[p];
            for (int j = 0; j < k; j++) {
                scanf("%d", &negosseos[j]);
            }
            for (int j = k; j < p; j++) {
                negosseos[j] = 0;
            }
            for (int j = 0; j < g; j++) {
                for (int l = 0; l < p; l++) {
                    vp[l].pontos += negosseos[corridas[j][l] - 1];
                }
            }
            sort(vp, vp+p, ordenar);
            for (int j = 0; j < p; j++) {
                if (vp[0].pontos == vp[j].pontos) {
                    printf("%d ", vp[j].id);
                } else {
                    break;
                }
            }
            printf("\n");
        }
    }

}