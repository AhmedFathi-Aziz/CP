#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 9;
vector<vector<int>> adj(N);
bool visited[N];
vector<int> out;
int f[N];

void dfs(int node) {
   visited[node] = true;
   out.push_back(node);
   for (auto &child : adj[node])
      if (!visited[child])
         dfs(child);
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, m;
   cin >> n >> m;
   while (m--) {
      int k;
      cin >> k;
      if (!k)
         continue;
      --k;
      int u, v;
      cin >> u;
      while (k--) {
         cin >> v;
         adj[u].push_back(v);
         adj[v].push_back(u);
      }
   }
   for (int i = 1; i <= n; i++) {
      if (f[i]) {
         cout << f[i] << ' ';
         continue;
      }
      dfs(i);
      for (auto &j : out)
         f[j] = out.size();
      cout << f[i] << ' ';
      out.clear();
   }
   return 0;
}
