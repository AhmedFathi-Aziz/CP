#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sum(ll n) {
   return n * (n + 1) / 2;
}

void doWork() {
   int a, b, c;
   cin >> a >> b >> c;
   if (a > b)
      swap(a, b);
   ll out = sum(b / c);
   --a;
   out -= sum(a / c);
   cout << out * c << endl;
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
