#include <bits/stdc++.h>
using namespace std;
const int N = 5001;
vector<vector<int>> adj(N);
bool visited[N];
int out = 0;

void dfs(int node) {
   visited[node] = true;
   ++out;
   for (auto &child : adj[node]) {
      if (!visited[child])
         dfs(child);
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n, m;
   while (cin >> n >> m && n) {
      for (int i = 0; i < n; i++)
         adj[i].clear(),
         visited[i] = false;
      unordered_map<string, int> mp;
      int index = 0;
      string name;
      int nodes = n;
      while (n--) {
         cin >> name;
         mp[name] = index++;
      }
      string u, v;
      while (m--) {
         cin >> u >> v;
         adj[mp[u]].push_back(mp[v]);
         adj[mp[v]].push_back(mp[u]);
      }
      int answer = 0;
      for (int i = 0; i < nodes; i++) {
         out = 0;
         if (!visited[i]) {
            dfs(i);
         }
         answer = max(answer, out);
      }
      cout << answer << endl;
   } 
   return 0;
}
