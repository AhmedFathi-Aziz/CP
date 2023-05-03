#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> no(100001);
bool visited[100001];

void dfs(int n) {
   visited[n] = true;
   for (auto &i : no[n])
      if (!visited[i])
         dfs(i);
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, m;
   cin >> n >> m;
   int u, v;
   for (int i = 0; i < m; i++)
      cin >> u >> v,
          no[u].push_back(v),
          no[v].push_back(u);
   int components = 0;
   for (int i = 1; i <= n; i++) {
      if (!visited[i]) {
         ++components;
         dfs(i);
      }
   }
   if (components == 1 && ++m == n)
      cout << "YES";
   else
      cout << "NO";
   cout << endl;
   return 0;
}
