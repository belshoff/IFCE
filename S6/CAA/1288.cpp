#include <bits/stdc++.h>

using namespace std;

int main()
{
    int CT, N, D, P, K, R, memo[51][101];
    cin >> CT;
    while(CT--) {
        cin >> N;
        for(int i = 0; i < N; i++)  memo[i][0] = 0;
        for(int i = 0; i < 101; i++)    memo[0][i] = 0;
        for(int i = 1; i <= N; i++)
        {
            cin >> D >> P;
            for(int j = 1; j <= 101; j++)
            {
                if(j < P)
                    memo[i][j] = memo[i-1][j];
                else
                    memo[i][j] = max(memo[i-1][j], memo[i-1][j-P] + D);
            }
        }
        cin >> K >> R;
        cout << (memo[N][K] >= R ? "Missao completada com sucesso\n" : "Falha na missao\n") ;
    }
    return 0;
}