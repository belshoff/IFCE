#include <bits/stdc++.h>

using namespace std;

const int MAXN = 6;

int n;
int g[MAXN][MAXN];

int di[] = {1,-1,0,0};
int dj[] = {0, 0,-1,1};

bool vis[MAXN][MAXN];
bool dfs(int i, int j) {
  vis[i][j] = true;
  if (i == 5 && j == 5) 
    return true;

  for (int k = 0; k < 4; ++k) {
    int ii, jj;
    ii = i + di[k];
    jj = j + dj[k];

    if (0 < ii && ii < MAXN && 0 < jj && jj < MAXN) {
      if (vis[ii][jj] == false && g[ii][jj] == 0) {
        if (dfs(ii,jj))
          return true;
      }
    }
  }

  return false;
}




bool bfs(int i, int j) {
  queue<pair<int,int> > q;
  bool vis[MAXN][MAXN];
  memset(vis, false, sizeof vis);

  vis[i][j] = true;
  q.push(make_pair(i,j));

  while (!q.empty()) {
    pair<int,int> p = q.front();
    i = p.first;
    j = p.second;
    q.pop();

    for (int k = 0; k < 4; ++k) {
      int ii, jj;
      ii = i + di[k];
      jj = j + dj[k];

      if (0 < ii && ii < MAXN && 0 < jj && jj < MAXN) {
        if (vis[ii][jj] == false && g[ii][jj] == 0) {
          vis[ii][jj] = true;
          q.push(make_pair(ii,jj));
        }
      }
    }
  }

  return vis[5][5];
}

int main() {
  int t;
  cin >> t;

  while (t-- > 0) {
    for (int i = 1; i <= 5; ++i)
      for (int j = 1; j <= 5; ++j)
        cin >> g[i][j];
    memset(vis, false, sizeof vis);
    bool res = dfs(1,1);
    cout << (res ? "COPS" : "ROBBERS") << endl;
  }
  return 0;
}
