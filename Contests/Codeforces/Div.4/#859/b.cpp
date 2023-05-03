#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   int a[n];
   int even = 0,
       odd = 0;
   for (int &i : a) {
      cin >> i;
      if (i & 1)
         odd += i;
      else
         even += i;
   }
   if (even > odd)
      cout << "yes";
   else
      cout << "no";
   cout << '\n';

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
