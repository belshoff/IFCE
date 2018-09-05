#include <bits/stdc++.h>

using namespace std;

int memo[10010];

int radares[10010];

int a, r;

int f(int n) {
    if(n <= 0) return 1;
    if(memo[n] == -1) {
        memo[n] = 0;
        for(int i = 0; i < r; ++i) {
            memo[n] += f(n-radares[i]);
            memo[n] %= 1000000007;
        }
    }
}

int main()
{

    int t;
    cin >> t;
    while(t--){
        cin >> a >> r;
        for(int i = 0; i < r; i++)
            cin >> radares[i];
        memset(memo, -1, sizeof(memo));
        // int res = 0;
        // for(int i = 0; i < r; i++)
        //     res += f(a);
        cout << f(a) << endl;
    }
    
    return 0;
}
