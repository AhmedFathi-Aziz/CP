#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n, m;
   cin >> n >> m;
   int a[n], b[m];
   for (int &i : a)
      cin >> i;
   for (int &i : b)
      cin >> i;
   int out = 0;
   for (int i = 0; i < n; i++) {
      int dis = 2e9;
      int low = 0, high = m - 1;
      int right = -1;
      while (low <= high) {
         int mid = low + (high - low) / 2;
         if (b[mid] >= a[i]) {
            right = b[mid] - a[i];
            high = mid - 1;
         }
         else
            low = mid + 1;
      }
      low = 0, high = m - 1;
      int left = -1;
      while (low <= high) {
         int mid = low + (high - low) / 2;
         if (b[mid] <= a[i]) {
            left = a[i] - b[mid];
            low = mid + 1;
         }
         else 
            high = mid - 1;   
      }
      if (left != -1)
         dis = left;
      if (right != -1)
         dis = min(dis, right);
      out = max(dis, out);
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
