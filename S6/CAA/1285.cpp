#include <cstdio>

const int LMAX = 21;
const int CMAX = 31;

int max(int a, int b) {
    return a > b ? a : b;
}

int array[LMAX][2];
int matriz[LMAX][CMAX];
 
int main()
{
    int N, P;
    while(scanf("%d", &N) && N){
        scanf("%d", &P);
        for(int i = 1; i <= N; i++)
        scanf("%d %d", &array[i][0], &array[i][1]);
        for(int i = 0; i <= N; i++){
            for(int j = 0; j <= P; j++){
                if(i == 0 || j == 0)
                    matriz[i][j] = 0;
                else
                {
                    if(array[i][1] > j)
                        matriz[i][j] = matriz[i - 1][j];
                    else
                        matriz[i][j] = max(matriz[i - 1][j - array[i][1]] + array[i][0], matriz[i - 1][j]);
                }
            }
        }
        printf("%d min.\n", matriz[N][P]);
    }
    return 0;
}