#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   ll n;
   cin >> n;
   n *= 8;

   ll discriminant = sqrt(1 + n);
   cout << --discriminant / 2 << endl;
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
