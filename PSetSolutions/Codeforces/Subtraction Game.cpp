#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int a, b;
   cin >> a >> b;
   if (a > 1)
      cout << 1 << endl;
   else if (a == 1 && b > 2)
      cout << 2 << endl;
   else if (a == 1 && b == 2)
      cout << 3 << endl;
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
