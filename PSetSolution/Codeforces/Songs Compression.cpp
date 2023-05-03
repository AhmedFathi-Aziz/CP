#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct item {
   ll a = 0,
       b = 0;
};

bool compare(item a, item b) {
   return a.a - a.b > b.a - b.b;
}

void doWork() {
   int n, m;
   cin >> n >> m;
   ++n;
   item a[n];
   a[0].b = 0;
   a[0].a = 0;

   ll bytes = 0;
   for (int i = 1; i < n; i++)
      cin >> a[i].a >> a[i].b,
          bytes += a[i].a;
   if (bytes <= m)
      return cout << 0, void();
   sort(a + 1, a + n, compare); 
   for (int i = 1; i < n; i++)
      a[i].b += a[i - 1].b,
      a[i].a += a[i - 1].a;
   
   int low = 1, high = n - 1;
   int out = -1;
   while (low <= high) {
      int mid = (low + high) / 2;
      if (bytes - a[mid].a + a[mid].b <= m)
         out = mid,
         high = mid - 1;
      else
         low = mid + 1;
   }
   cout << out << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int cases = 1;
   //cin >> cases;
   while (cases--)
       doWork();
    return 0;
}
