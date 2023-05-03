#include <bits/stdc++.h>
using namespace std;
#define ll long long

int lower(vector<int> &v, int pos) {
   int low = 0, high = v.size() - 1;
   int out = -1;
   while (low <= high) {
      int mid = (low + high) / 2;
      if (v[mid] <= pos)
         out = mid,
         low = mid  + 1;
      else
         high = mid - 1;
   }
   return out;
}

void doWork() {
   int n, m, k, t;
   cin >> n >> m
       >> k >> t;
   vector<int> v;
   while (k--) {
      int i, j;
      cin >> i >> j;
      --i;
      v.push_back(i * m + j);
   }
   sort(v.begin(), v.end());
   while (t--) {
      int i, j;
      cin >> i >> j;
      --i;
      int pos = i * m + j;
      int index = lower(v, pos);
      if (v[index] == pos) {
         cout << "Waste" << '\n';
         continue;
      }
      pos -= ++index;
      if (pos % 3 == 0)
         cout << "Grapes" << '\n';
      else if (pos % 3 == 1)
         cout << "Carrots" << '\n';
      else
         cout << "Kiwis" << '\n';

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
