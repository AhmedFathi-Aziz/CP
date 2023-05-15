#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int l, r;
   cin >> l >> r;
   if (l + l > r)
      cout << -1 << ' ' << -1;
   else
      cout << l << ' ' << l + l;
   cout << '\n';
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
