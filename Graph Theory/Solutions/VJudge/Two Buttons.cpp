#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5;
vector<vector<int>> adj(N);
bool vis[N];
int dis[N];

void bfs(int node) {
   queue<int> q;
   q.push(node);
   vis[node] = true;
   while (!q.empty()) {
      int u = q.front();
      q.pop();
      for (auto &v : adj[u])
         if (!vis[v])
            vis[v] = true,
            dis[v] = dis[u] + 1,
            q.push(v);
   }
}

void doWork() {
   int n, m;
   cin >> n >> m;
   for (int i = 1; i < N / 2; i++)
      adj[i].push_back(i * 2),
      adj[i].push_back(i - 1);
   bfs(n);
   cout << dis[m] << endl;
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
