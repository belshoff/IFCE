#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10100;

int n, m;
vector<int> adj[MAXN];

int vis[MAXN];
bool dfs(int v) {
  vis[v] = 1;
  for (int u : adj[v]) {
    if (vis[u] == 1)
      return true;
    if (vis[u] == 0 && dfs(u))
      return true;
  }
  vis[v] = 2;
  return false;
}

int main() {
  int t;

  cin >> t;
  while (t--) {
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
      adj[i].clear();

    for (int i = 0; i < m; ++i) {
      int v, u;
      cin >> v >> u;
      adj[v].push_back(u);
    }

    bool ok = false;
    memset(vis, 0, sizeof vis);
    for (int v = 1; !ok && v <= n; ++v) {
      if (vis[v] == 0 && dfs(v))
        ok = true;
    }

    cout << (ok ? "SIM" : "NAO") << endl;
  }
  return 0;
}
