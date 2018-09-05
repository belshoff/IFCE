#include <bits/stdc++.h>

#define MAXN 85

/*
1 indexado;
*/

using namespace std;

int N, M, P[MAXN];
string t;

vector<int> ciclos[MAXN];

int main()
{
    while(cin >> N >> M) {
        if(N+M == 0) return 0;
        for(int i = 0; i <= N; i++)
            cin >> P[i];
        getchar();
        getline(cin, t);
        t = " " + t;
        for(int i = 1; i <= N; i++) {
            vector<bool> vis(N+1, false);
            ciclos[i].clear();
            for(int j = i; !vis[j]; j = P[j]) {
                ciclos[i].push_back(j);
                vis[j] = true;
            }
        }
        for(int i = 1; i <= N; ++i) {
            int tam = ciclos[i].size();
            int r = M%tam;
            r = (tam-r)%tam;
            putchar(t[ciclos[i][r]]);
        }
        puts("");
    }
    
    return 0;
}