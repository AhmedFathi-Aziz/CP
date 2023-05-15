#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int l, r;
   cin >> l >> r;
   int n = 1e5;
   int a[++n];
   a[0] = 0;
   for (int i = 1; i < n; i++) {
      if (i % 10 == 2 || i % 10 == 3 || i % 10 == 9)
         a[i] = 1;
      else
         a[i] = 0;
      a[i] += a[i - 1];
   }
   cout << a[r] - a[l - 1] << '\n';
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
