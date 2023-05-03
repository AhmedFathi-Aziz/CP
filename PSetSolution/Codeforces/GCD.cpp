#include <bits/stdc++.h>
using namespace std;
#define ll long long

int GCD(int a, int b) {
   while (b) {
      int aa = a;
      a = b;
      b = aa % b;
   }
   return a;
}

void doWork() {
   int a, b;
   cin >> a >> b;
   int gcd = GCD(a, b);
   ll lcm = 1LL * (b / gcd) * a;
   cout << gcd << ' ' << lcm << endl;
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
