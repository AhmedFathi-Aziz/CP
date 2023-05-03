#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
vector<vector<int>> adj(N);
vector<int> dis(N, -1);
vector<int> parent(N);

void bfs(int root) {
   dis[root] = 0;
   queue<int> q;
   q.push(root);
   parent[root] = root;

   while (!q.empty()) {
      int node = q.front();
      q.pop();
      int edjes = dis[node];
      for (int &child : adj[node]) {
         if (dis[child] == -1) 
            q.push(child),
            dis[child] = edjes + 1,
            parent[child] = node;

      }
   }
   return void();
}

void doWork() {
   int n, m;
   cin >> n >> m;
   while (m--) {
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
   }
   bfs(1);
   if (dis[n] != -1) {
      cout << ++dis[n] << endl;
      vector<int> path;
      int node = n;
      path.push_back(node);
      do {
         node = parent[node];
         path.push_back(node);
      } while (node != 1);
      reverse(path.begin(), path.end());
      for (auto i : path)
         cout << i << ' ';
   }
   else
      cout << "IMPOSSIBLE";
   cout << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int cases = 1;
   // cin >> cases;
   while (cases--)
       doWork();
    return 0;
}
