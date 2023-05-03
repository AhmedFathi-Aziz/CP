#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> sp(1001);
bool visited[1001];
int dis[1001];

void dfs(int node, int d) {
   visited[node] = true;
   dis[node] = d;
   for (int &child : sp[node])
      if (!visited[child])
         dfs(child, 1 + dis[node]);
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   int u, v;
   for (int i = 1; i < n; i++)
      cin >> u >> v,
          sp[u].push_back(v),
          sp[v].push_back(u);
   dfs(1, 0);
   int q;
   cin >> q;
   int out = 0, mini = 1e4;
   while (q--) {
      int id;
      cin >> id;
      if (mini > dis[id])
         mini = dis[id],
         out = id;
      else if (mini == dis[id] && id < out)
            out = id;
   }
   cout << out;
   cout << endl;
   return 0;
}
