#include <bits/stdc++.h>
using namespace std;

int n, hp_ini, mx = 10000000, memo[2005][1005];
pair<int,int> s[1005];

int solve(int hp, int mag) {
    if(hp <= 0) return 0;
    if(mag == n) return 10000000;
    if(memo[hp][mag] != -1) return memo[hp][mag];
    return memo[hp][mag] = min(solve(hp - s[mag].first, mag + 1) + s[mag].second, solve(hp, mag + 1));
}

int main(){
    while(cin>>n>>hp_ini){
        memset(memo, -1, sizeof memo);
        
        for(int i=0; i<n; i++) cin>>s[i].first>>s[i].second;
        
        int ans = solve(hp_ini, 0);
        if(ans != mx) cout<<ans<<endl;
        else cout<<"-1\n";
    }
    return 0;
}