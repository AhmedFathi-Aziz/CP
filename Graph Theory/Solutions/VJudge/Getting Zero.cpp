#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 32768;

int bfs(int node) {
   queue<pair<int, int>> q;
   q.push({node, 0});
   bool vis[32768] = {};

   while (!q.empty()) {
      pair<int, int> item = q.front();
      q.pop();
      if (!item.first)
         return item.second;
      int a = (item.first + 1) % mod;
      int b = (item.first * 2) % mod;
      if (!a || !b)
         return ++item.second;
      if (!vis[a])
         vis[a] = true,
         q.push({a, item.second + 1});
      if (!vis[b])
         vis[b] = true,
         q.push({b, item.second + 1});
   }
   return 0;
}


void doWork() {
   int n;
   cin >> n;
   int a[n];
   for (int &i : a)
      cin >> i;
   for (int &i : a)
      cout << bfs(i) << ' ';
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
