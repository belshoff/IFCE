"""
#include <cstdio>
 
#define LMAX 21
#define CMAX 31
#define max(a, b) a > b ? a : b
 
struct Pedido{
    int tempo;
    int pizzas;
};
 
struct Pedido array[LMAX];
int matriz[LMAX][CMAX];
 
int main()
{
    int N, P;
 
    while(scanf("%d", &N) && N){
        scanf("%d", &P);
        for(int i = 1; i <= N; i++)
            scanf("%d %d", &array[i].tempo, &array[i].pizzas);
 
        for(int i = 0; i <= N; i++){
            for(int j = 0; j <= P; j++){
                if(i == 0 || j == 0)
                    matriz[i][j] = 0;
                else{
                    if(array[i].pizzas > j)
                        matriz[i][j] = matriz[i - 1][j];
                    else
                        matriz[i][j] = max(matriz[i - 1][j - array[i].pizzas] + array[i].tempo, matriz[i - 1][j]);
                }
            }
        }
 
        printf("%d min.\n", matriz[N][P]);
    }
 
    return 0;
}
"""

LMAX = 21
CMAX = 31

pedidos = {}
memoria = {}
# [[-1 for x in range(CMAX)] for x in range(LMAX)]

while True:
    n = int(input())
    if(n == 0): break
    p = int(input())
    for i in range(n):
        pedidos[i] = tuple(map(int, input().split()))
    
    for i in range(n+1):
        for j in range(p+1):
            if i == 0 or j == 0:
                memoria[i][j] = 0
            else:
                if pedidos[i][1] > j:
                    memoria[i][j] = memoria[i - 1][j]
                else:
                    memoria[i][j] = max(memoria[i - 1][j - pedidos[i][1]] + pedidos[i][0], memoria[i - 1][j])
    
    print(memoria[n][p], "min.")
