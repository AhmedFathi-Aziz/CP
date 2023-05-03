#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n, q;
   cin >> n >> q;
   ++n;
   ll a[n];
   a[0] = 0;
   for (int i = 1; i < n; i++)
      cin >> a[i],
      a[i] += a[i - 1];
   ll sum = a[--n];
   while (q--) {
      int l, r, k;
      cin >> l >> r >> k;
      if ((sum - (a[r] - a[l - 1]) + (r - l + 1) * k) & 1)
            puts("yes");
      else
         puts("no");
   }
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
