#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   n *= n;
   int a[n];
   map<int, int> mp;
   for (int &i : a)
      cin >> i,
      mp[i]++;
   sort(a, a + n, greater<int>());
   vector<int> answer;
   for (int i = 0; i < n; i++) {
      int cur = a[i];
      if (mp[cur]) {
          mp[cur]--;
          for (auto &it : answer)
             mp[__gcd(it, cur)] -= 2;
          answer.push_back(cur);
      }
   }
   for (int &i : answer)
      cout << i << ' ';
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
