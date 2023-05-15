#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   ll a, b;
   cin >> a >> b;
   ll out = 0;
   while (a && b) {
      if (a >= b)
         out += a / b,
             a %= b;
      else if (b >= a)
         out += b / a,
             b %= a;
   }
   cout << out << endl;
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
