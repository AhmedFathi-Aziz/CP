#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   int a[n];
   int neg = 0;
   int mini = 1e9;
   ll out = 0;
   for (int &i : a) {
      cin >> i;
      if (i < 0)
         ++neg, i = -i;
      mini = min(mini, i);
      out += i;
   }
   if (neg & 1)
      out -= mini * 2;
   cout << out << endl;
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
