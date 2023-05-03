#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k;
bool valid(int v) {
   int p = 0,
       vt = v;
   ll val = 0;
   while (vt) {
     val += v / pow(k, p);
     vt = v / pow(k, p);
     ++p; 
   }
   return val >= n;
}

void doWork() {
   cin >> n >> k;
   int low = 1, high = 1e9;
   int mid = 0;
   while (low < high) {
      mid = low + (high - low) / 2;
      if (valid(mid))
         high = mid;
      else
         low = mid + 1;
   }
   cout << high << '\n';
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
