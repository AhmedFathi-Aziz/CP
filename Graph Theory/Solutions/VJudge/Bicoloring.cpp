#include <bits/stdc++.h>
using namespace std;

const int N = 1001;
vector<vector<int>> adj(N);
bool visited[N];
bool color[N];

bool dfs(int node, int c) {
   visited[node] = true;
   color[node] = c;
   for (int &child : adj[node]) {
      if (!visited[child]) {
         bool out = dfs(child, !c);
         if (!out)
            return false;
      }
      else
         if (color[node] == color[child])
            return false;
   }
   return true;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n;
   while (cin >> n && n) {
      int m;
      cin >> m;
      for (int i = 1; i <= n; i++)
         adj[i].clear(),
         visited[i] = false;
      int u, v;
      while (m--) {
         cin >> u >> v;
         adj[u].push_back(v);
         adj[v].push_back(u);
      }
      
      if (!dfs(1, 0))
         cout << "NOT BICOLOURABLE.";
      else 
         cout << "BICOLOURABLE.";
      cout << '\n';
   }

   return 0;
}
