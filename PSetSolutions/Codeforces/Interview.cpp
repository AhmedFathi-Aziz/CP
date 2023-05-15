#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   int a[++n];
   for (int i = 1; i < n; i++)
      cin >> a[i],
      a[i] += a[i - 1];
   int l = 1, r = --n;
   int out = 0;
   while (l <= r) {
      int mid = (l + r) / 2;
      cout << "? " << mid - l + 1 << ' ';
      for (int i = l; i <= mid; i++)
         cout << i << ' ';
      cout << endl;
      int w;
      cin >> w;
      if (a[mid] - a[l - 1] == w)
         l = mid + 1;
      else
         r = mid - 1,
         out = mid;
   }
   cout << "! " << out << endl;
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
