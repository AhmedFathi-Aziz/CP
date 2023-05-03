#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
vector<vector<int>> adj(N);
bool visited[N];
bool color[N];

bool dfs(int node, int c) {
   visited[node] = true;
   color[node] = c;
   for (int &i : adj[node]) {
      if (!visited[i]) {
         bool res = dfs(i, !c);
         if (!res)
            return res;
      }
      else
         if (color[node] == color[i])
            return false;
   }
   return true;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n, m;
   cin >> n >> m;
   int u, v;
   while (m--)
      cin >> u >> v,
      adj[u].push_back(v),
      adj[v].push_back(u);
   bool fail = false;
   for (int i = 1; i <= n; i++) {
      if (!visited[i]) {
         bool res = dfs(i, 0);
         if (!res) {
            fail = true;
            break;
         }
      }
   }
   if (fail)
      cout << "IMPOSSIBLE" << endl;
   else 
      for (int i = 1; i <= n; i++)
         cout << color[i] + 1 << ' ';
   return 0;
}
