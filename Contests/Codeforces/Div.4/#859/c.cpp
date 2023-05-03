#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   string a;
   cin >> n >> a;
   map<char, bool> mp;
   
   bool alt = 0;
   for (char &i : a) {
      if (mp.find(i) == mp.end())
         mp[i] = alt;
      else if (mp[i] != alt)
         return cout << "no" << '\n',
                void();
      alt ^= 1;
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
