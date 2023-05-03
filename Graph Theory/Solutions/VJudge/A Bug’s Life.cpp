#include <bits/stdc++.h>
using namespace std;

const int N = 2e3 + 9;
vector<vector<int>> adj(N);
bool color[N];
bool visited[N];

bool dfs(int node, int c) {
   visited[node] = true;
   color[node] = c;
   for (int &child : adj[node]) {
      if (!visited[child] && !dfs(child, !c))
         return false;
      if (color[child] == color[node])
         return false;

   }
   return true;
}

void doWork() {
   int n, m;
   cin >> n >> m;
   ++n;
   for (int i = 1; i < n; i++)
      adj[i].clear(),
      visited[i] = false;
   int u, v;
   while (m--) {
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
   }
   for (int i = 1; i < n; i++) {
      if (!visited[i]) {
         if (!dfs(i, 0))
            return cout << "Suspicious bugs found!" << '\n',
                   void();
      }
   }
   cout << "No suspicious bugs found!" << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int cases;
   cin >> cases;
   for (int i = 1; i <= cases; i++) {
      cout << "Scenario #" << i << ':' << '\n';
      doWork();
   }

   return 0;
}
