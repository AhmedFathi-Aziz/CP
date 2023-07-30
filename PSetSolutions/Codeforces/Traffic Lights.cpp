#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int x;
   int g, y, r;
   cin >> x >> g >> y >> r;
   int time = g + y + r;
   x %= time;

   if (x < g)
      cout << "GREEN";
   else if (x < (g + y))
      cout << "YELLOW";
   else
      cout << "RED";
   cout << endl;
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
