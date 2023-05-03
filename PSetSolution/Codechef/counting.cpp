#include <bits/stdc++.h>
using namespace std;
#define ll long long

int val(int n) {
   int out = n / 10;
   out *= 3;
   n -= (n / 10) * 10;
   for (int i = 2; i <= n; i++)
      if (i == 2 || i == 3 || i == 9)
         out++;
   return out;
}

void doWork() {
   int l, r;
   cin >> l >> r;
   cout << val(r) - val(l - 1) << endl;
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
