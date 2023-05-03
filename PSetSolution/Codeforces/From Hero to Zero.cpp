#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   ll n, k;
   cin >> n >> k;
   int c = 0;
   while (n % k != 0)
      n--, c++;
   cout << c << endl;
   cout << n << ' ' << k << endl; 
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
