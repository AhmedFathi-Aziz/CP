#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n, d;
   cin >> n >> d;
   vector<pair<int, int>> v(n);
   for (int i = 0; i < n; i++) {
      cin >> v[i].first >> v[i].second;
      if (i)
         v[i].second += v[i - 1].second;
   }
   sort(v.begin(), v.end());
   vector<int> m(n);
   for (int i = 0; i < n; i++)
      m[i] = v[i].first;
   int out = 0;
   for (int i = 0; i < n; i++) {
      auto it = upper_bound(m.begin(), m.end(), m[i] + d - 1) - m.begin();

   }  
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
