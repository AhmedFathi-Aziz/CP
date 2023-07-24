#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   int q = 0;
   int index = 0;
   for (int i = 1; i <= n; i++) {
      int a, b;
      cin >> a >> b;
      if (a <= 10)
         if (b > q)
            q = b,
            index = i;
   }
   cout << index << endl;
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
