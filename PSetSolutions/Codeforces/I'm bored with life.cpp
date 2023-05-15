#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int a, b;
   cin >> a >> b;
   int common = min(a, b);
   int gcd = 1;
   for (int i = 2; i <= common; i++)
      gcd *= i;
   cout << gcd << endl;
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
