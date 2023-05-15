#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n, m;
   cin >> n >> m;
   deque<pair<int, int>> dq;
   for (int i = 1; i <= n; i++) {
      int a;
      cin >> a;
      dq.push_back({a, i});
   }
   int out = 0;
   while (!dq.empty()) {
      dq.front().first -= m;
      if (dq.front().first > 0) {
         dq.push_back({dq.front().first, dq.front().second});
         dq.pop_front();
      }
      else
         out = dq.front().second,
         dq.pop_front();
   }
   cout << out << endl;
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
