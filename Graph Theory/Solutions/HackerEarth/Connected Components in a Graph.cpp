#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, e;
   cin >> n >> e;
   ++n;
   vector<vector<int>> neighbors(n);
   bool visited[n];
   memset(visited, 0, sizeof (visited));
   for (int i = 0; i < e; i++) {
      int u, v;
      cin >> u >> v;
      neighbors[u].push_back(v);
      neighbors[v].push_back(u);
   }

   int out = 0;
   stack<int> stk;
   for (int node = 1; node < n; node++) {
      if (!visited[node]) {
         ++out;
         stk.push(node);
         while (!stk.empty()) {
            int root = stk.top();
            stk.pop();
            visited[root] = true;
            for (int & child : neighbors[root])
               if (!visited[child])
                  stk.push(child);
         }
      }
   }
   cout << out << endl;
   return 0;
}
