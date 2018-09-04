#include <bits/stdc++.h>

using namespace std;

int memo[10010][1010];

int radares[1010];

int a, r;

int somatorio(int pista, int radar) {
    if(pista-radar) return 1;
    int cnt = 0;
    for(int i = 0; i < r; i++)
    {
        if(memo[pista][radar] == -1)
            memo[pista][radar] = somatorio(pista-radar, radares[i]);
        cnt += memo[pista][radar];
    }
    return cnt + 1;
    
    /*
    for x in radares:
        if memo[pista][x] == -1: memo[pista][x] = somatorio(pista-radar, x)
        count += memo[pista][x]
    return count
    */
}

int main()
{
    memset(memo, 0, sizeof(memo));

    int t;
    cin >> t;
    while(t--){
        cin >> a >> r;
        for(int i = 0; i < r; i++)
            cin >> radares[i];
        int res = 0;
        for(int i = 0; i < r; i++)
            res += somatorio(a, radares[i]);
        cout << res%1000000007;
    }
    
    return 0;
}
