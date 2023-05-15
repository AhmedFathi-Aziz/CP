#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool bs(int a[], int n, int mid) {
   multiset<int> st;
   for (int i = 0; i < n; i++)
      st.insert(a[i]);
   int len = 0;
   for (int i = 1; i <= mid; i++) {
      if (st.count(i)) {
         ++len;
         st.erase(st.find(i));
      }
   }
   len += st.size() / 2;
   return len >= mid;
}

void doWork() {
   int n;
   cin >> n;
   int a[n];
   for (int &i : a)
      cin >> i;
   int out = 0;
   int low = 0, high = 3 * n;
   while (low <= high) {
      int mid = low + (high - low) / 2;
      if (bs(a, n, mid)) {
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
