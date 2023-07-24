#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   int i = 0;
   map<int, int> mp;
   for (; i < n; i++) {
      int m;
      cin >> m;
      if (m <= n)
         mp[m]++;
   }
   int freq[n + 1];
   memset(freq, 0, sizeof (freq));
   for (auto &it : mp) {
      for (int j = it.first; j <= n; j += it.first)
         freq[j] += it.second;
   }
   int answer = 0;
   for (i = 1; i <= n; i++)
      answer = max(answer, freq[i]);
   cout << answer << '\n';
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
