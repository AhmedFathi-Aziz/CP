#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool prime(ll n) {
   if (n == 1)
      return false;
   for (ll i = 2; i * i <= n; i++)
      if (n % i == 0)
         return false;
   return true;
}

void doWork() {
   ll n;
   cin >> n;
   ll m = sqrt(n);
   if (m * m == n && prime(m))
      cout << "YES" << '\n';
   else
      cout << "NO" << '\n';
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
