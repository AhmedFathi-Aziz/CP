#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   if (n == 1)
      return cout << "no",
      void();
   
   int prime = 2;
   map<int, int> mp;
   while (n != 1) {
      while (n % prime == 0)
         n /= prime,
         mp[prime]++;
      ++prime;
   }
   if (mp.size() != 1)
      cout << "no";
   else
      cout << "yes";
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
