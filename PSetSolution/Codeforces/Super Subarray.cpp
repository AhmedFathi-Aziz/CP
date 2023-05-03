#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   ++n;
   ll a[n];
   ll pre[n];
   pre[0] = 0;
   for (int i = 1; i < n; i++) {
      cin >> a[i];
      pre[i] = a[i] + pre[i - 1];
   }
   ll lcm = 0;
   int out = 0;
   for (int i = 1; i < n; i++) {
      lcm = a[i];
      for (int j = i; j < n; j++) {
        lcm = (lcm / __gcd(lcm, a[j])) * a[j]; 
        if (lcm > 2e12)
           break;
        if ((pre[j] - pre[i - 1]) % lcm == 0)
          ++out;
      } 
   }
   cout << out << '\n';
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
