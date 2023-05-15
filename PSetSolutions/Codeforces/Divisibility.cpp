#include <bits/stdc++.h>
using namespace std;
#define ll long long

int lcm(ll a, ll b) {
   return (a / __gcd(a, b)) * b;
}

void doWork() {
   ll n;
   cin >> n;
   
   int out = lcm(2, 3);
   for (int i = 4; i <= 10; i++)
      out = lcm(out, i);
   cout << n / out;
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
