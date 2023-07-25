#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool is_permutation(int *a, int n) {
   map<int, bool> mp;
   for (int i = 0; i < n; i++) {
      if (!(a[i] >= 1 && a[i] <= n))
         return false;
      mp[a[i]] = true;
   }
   if (mp.size() != n)
      return false;
   return true;
}

int* process(int *a, int n) {
   int *perm = (int*)malloc(n * sizeof(int));
   for (int i = 0; i < n; i++) {
      int b = 0;
      for (int j = 0; j <= i; j++) {
        b += a[j]; 
      }
      b %= n;
      ++b;
      perm[i] = b;
   }
   return perm;
}

void doWork() {
   int n;
   cin >> n;
   int a[n];
   for (int i = 0; i < n; i++)
      a[i] = i + 1;

   do {
      int *b = process(a, n);
      if (is_permutation(b, n)) {
         for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
         cout << endl;
      }
   } while (next_permutation(a, a + n));
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
