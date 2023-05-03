#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   int a[n];
   for (int &i : a)
      cin >> i;
   int mn = 100, mx = 0;
   int mnp = 0, mxp = 0;
   for (int i = 0; i < n; i++) {
      if (a[i] <= mn) {
         mn = a[i];
         mnp = i;
      }
      if (a[i] > mx) {
         mx = a[i];
         mxp = i;
      }
   }
   int out = mxp + (n - mnp - 1);
   if (mxp > mnp)
      --out;
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
