#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   cout << 1 << ' ' << --n << endl;
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
