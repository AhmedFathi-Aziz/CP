#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   ll c;
   cin >> n >> c;
   int a[n];
   int i = 0;
   for (i = 0; i < n; i++)
      cin >> a[i];

   int low = 1;
   int high = 1e9;
   while (low <= high) {
      int mid = low + (high - low) / 2;
      ll area = 0;
      ll ct = c;
      for (i = 0; i < n; i++) {
         area = 1LL * (a[i] + 2 * mid) * (a[i] + 2 * mid);
         if (area > ct) {
            ct = -1;
            break;
         }
         ct -= area;
      }
      if (ct == 0) 
         return cout << mid << '\n',
                void();
      else if (ct < 0)
         high = mid - 1;
      else
         low = mid + 1;
   }
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
