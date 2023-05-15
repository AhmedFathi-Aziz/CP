#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   int a[n];
   for (int &i : a)
      cin >> i;
   sort(a, a + n);
   if (a[0] != 1)
      return cout << "no" << '\n',
             void();
   int sum = 1;
   for (int i = 1; i < n; i++) {
      if (a[i] > sum)
         return cout << "no" << '\n',
                void();
      sum += a[i];
   }
   cout << "yes" << '\n';
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
