#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   string a;
   cin >> n >> a;
   int p = 0;
   int out = 0;
   for (int i = n - 1; i >= 0; i--) {
      if (a[i] == 'P')
         p++;
      else {
         if (p > out)
            out = p;
         p = 0;
      }
   }
   cout << out << '\n';
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
