#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   int freq[n + 1];
   memset(freq, 0, sizeof freq);
   n *= 2;
   int a[n];
   int out = 0;
   int mx = 0;
   for (int &i : a) {
      cin >> i;
      if (++freq[i] == 2)
         mx = max(out, mx),
         --out;
      else
         ++out;
   }
   cout << mx << endl;
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
