#include <bits/stdc++.h>
using namespace std;

const int N = 101;
int n;
int adj[N][N];
bool visited[N];

void dfs(int node) {
   visited[node] = true;
   for (int i = 1; i <= n; i++) {
      if (adj[node][i] && !visited[i]) {
         dfs(i);
      }
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   cin >> n;
   for (int i = 1; i <= n; i++)
      for (int j = 1; j <= n; j++)
         cin >> adj[i][j];
   int c = 0;
   for (int i = 1; i <= n; i++) {
      if (!visited[i])
         c++, dfs(i);
   }
   cout << c << endl;
   return 0;
}
