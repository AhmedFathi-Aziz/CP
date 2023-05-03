#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int a, b, c;
   cin >> a >> b >> c;
   if (a + b == c)
      cout << '+';
   else
      cout << '-';
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
