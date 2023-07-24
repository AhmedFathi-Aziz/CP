#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n, k;
   cin >> n >> k;
   int a[n];
   int i = 0;
   for (; i < n; i++)
      cin >> a[i];
   if (n == 1)
      return cout << 0 << '\n',
             void();
   sort(a, a + n);
   int count = 0,
       answer = 0;
   for (i = 1; i < n; i++) {
      if (a[i] - a[i - 1] <= k)
         ++count;
      else {
         if (count)
            ++count;
         if (count > answer)
               answer = count;
         count = 0;
      }
   }
   if (count)
      ++count;
   else if (!answer)
      return cout << --n << '\n',
             void();
   cout << n - max({answer, count}) << '\n';
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
