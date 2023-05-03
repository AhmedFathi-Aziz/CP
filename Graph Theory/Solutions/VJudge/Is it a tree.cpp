#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 9;
vector<vector<int>> adj(N);
bool visited[N];


int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, m;
   cin >> n >> m;
   if (m + 1 != n)
      return cout << "NO" << '\n',
             0;
   int u, v;
   while (m--) {
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
   }

   int com = 0;
   stack<int> stk;
   for (int i = 1; i <= n; i++) {
      if (!visited[i]) {
         com++;
         stk.push(i);
         while (!stk.empty()) {
            int top = stk.top();
            stk.pop();
            visited[top] = true;
            for (int &u : adj[top])
               if (!visited[u])
                  stk.push(u);
         }
      }
   }
   com == 1 ? cout << "YES" << '\n' :
     cout << "NO" << '\n'; 
   return 0;
}
