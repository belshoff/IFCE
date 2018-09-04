#include <bits/stdc++.h>

using namespace std;

int memo[5][5];

int flood(int i, int j) {
    if(memo[i][j] > 0) return 0;
    if(memo[i][j] == 0) memo[i][j] = 2;
    if (i < 4) flood(i+1, j);
    if (j < 4) flood(i, j+1);
    if (j > 0) flood(i, j-1);
    if (i > 0) flood(i-1, j);
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--){
        getchar();
        for(int i = 0; i < 5; i++)
            for(int j = 0; j < 5; j++)
                cin >> memo[i][j];
        flood(0, 0);
        cout << (memo[4][4] == 2 ? "COPS" : "ROBBERS") << "\n";
    }
    return 0;
}
