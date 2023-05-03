#include <bits/stdc++.h>
using namespace std;
const int N = 2001;
vector<vector<int>> adj(N);
bool visited[N];
int ans = 0;

void dfs(int node, int level) {
   visited[node] = true;
   ans = max(ans, level);
   for (int &i : adj[node])
      if (!visited[i])
         dfs(i, level + 1);
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin >> n;
   for (int i = 1; i <= n; i++) {
      int m;
      cin >> m;
      if (m != -1)
         adj[i].push_back(m);
   }
   for (int i = 1; i <= n; i++) {
         dfs(i, 1);

      for (int j = 0; j <= n; j++)
         visited[j] = false;
   }
   cout << ans << endl;
   return 0;
}
