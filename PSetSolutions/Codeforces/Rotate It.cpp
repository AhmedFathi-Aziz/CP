#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   int i = 0;
   deque<int> dq;
   for (i = 0; i < n; i++) {
      int v;
      cin >> v;
      dq.push_back(v);
   }
   ll sum = 0;
   ll answer = -1e18;
   for (i = 0; i < n; i++) {
      sum = 0;
      for (int j = 0; j < n; j += 2) {
         sum += dq[j];
      }
      dq.push_back(dq.front());
      dq.pop_front();
      answer = max(answer, sum);
   }
   cout << answer << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int cases = 1;
   cin >> cases;
   while (cases--)
       doWork();
    return 0;
}
