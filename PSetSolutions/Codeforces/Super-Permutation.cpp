#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   if (n == 1)
      cout << 1;
   else if (n & 1)
      cout << -1;
   else {
      int perm[n];
      int a = n;
      int b = 1;
      for (int i = 0; i < n / 2; i++) {
         if (i % 2) {
            perm[i] = b;
            perm[n - i - 1] = ++b;
            ++b;
            
         } else {
            perm[i] = a;
            perm[n - i - 1] = --a;
            --a;
         }
      }
      for (int i = 0; i < n; i++)
         cout << perm[i] << ' ';
   }
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
