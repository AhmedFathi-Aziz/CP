#include <bits/stdc++.h>
using namespace std;
#define ll long long

int bs(int m, int a[], int n) {
   int low = 0, high = n - 1;
   int mid = 0, out = -1;
   while (low <= high) {
      mid = low + (high - low) / 2;
      if (a[mid] <= m) {
         out = mid;
         low = mid + 1;
      }
      else
         high = mid - 1;
   }
   return ++out;
}

void doWork() {
   int n;
   cin >> n;
   int a[n];
   for (int &i : a)
      cin >> i;
   sort(a, a + n);
   int q;
   cin >> q;
   while (q--) {
      int m;
      cin >> m;
      cout << bs(m, a, n) << '\n';
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
