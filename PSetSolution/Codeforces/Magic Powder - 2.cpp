#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool bs(int a[], int b[], int n, ll k, int mid) {
   for (int i = 0; i < n; i++) {
      if ((ll) mid * a[i] > b[i]) {
         ll diff = (ll) mid * a[i] - b[i];
         k -= diff;
         if (k < 0)
            return false;
      }
   }
   return true;
}

void doWork() {
   int n;
   ll k;
   cin >> n >> k;
   int a[n], b[n];
   for (int &i : a)
      cin >> i;
   for (int &i : b)
      cin >> i;
   int out = 0;
   int low = 1, high = 2e9;
   while (low <= high) {
      int mid = low + (high - low) / 2;
      if (bs(a, b, n, k, mid)) {
         out = mid;
         low = mid + 1;
      }
      else
         high = mid - 1;
   }
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
