#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   string a;
   cin >> a;
   int l = 0,
   r = n - 1;
   while (l <= r) {
      if (a[l] != a[r])
         l++, r--;
      else 
         break;
   }
   cout << r - l + 1 << endl;

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
