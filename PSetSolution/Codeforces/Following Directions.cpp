#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   string a;
   cin >> a;
   int up = 0, right = 0;
   for (char &i : a) {
      if (i == 'U')
         up++;
      else if (i == 'D')
         up--;
      else if (i == 'R')
         right++;
      else
         right--;
      if (up == 1 && right == 1)
         return cout << "yes\n", void();
   }
   cout << "no\n";
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
