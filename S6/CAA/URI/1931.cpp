#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100100;
const int INF = 0x3f3f3f3f;

int n;
vector<pair<int, int> > g[MAXN];

void dijkstra(int s, int t) {
  priority_queue<pair<int,int> > q;
  int p[MAXN];
  int c[MAXN];

  memset(c, INF, sizeof c);
  memset(p, -1, sizeof p);

  c[s] = 0;
  q.push(make_pair(0, s));

  while (!q.empty()) {
    int v = q.top().second; q.pop();

    for (auto e : g[v]) {
      int u = e.first;
      int cc = e.second;
      if (c[v] + cc < c[u]) {
        c[u] = c[v] + cc;
        p[u] = v;
		if(c[u]%2 == 0)
			q.push(make_pair(-c[u], u));
      }
    }
  }

  if (p[t] == -1) cout << p[t] << endl;
  else cout << c[t] << endl;
}

int main() {

  int c, v;
  cin >> c >> v;
  for (int i = 1; i <= c; ++i)	g[i].clear();
   while (v--) {
     int c1, c2, p;
     cin >> c1 >> c2 >> p;
     g[c1].push_back(make_pair(c2, p));
   }
   dijkstra(1, c);

  return 0;
}
