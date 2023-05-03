#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   ll n;
   cin >> n;
   int lcm = 1;
   for (int i = 2; i < 11; i++)
      lcm = (lcm / __gcd(lcm, i)) * i;
   cout << n / lcm;
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
