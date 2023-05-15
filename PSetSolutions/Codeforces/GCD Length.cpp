#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int a, b, c;
   cin >> a >> b >> c;
   int out = 1;
   while (to_string(out).size() != c)
      out *= 2;

   int n = out,
          m = out;
   while (to_string(n).size() != a)
      n *= 2;
   while (to_string(m).size() != b)
      m *= 3;
   cout << n << ' ' << m << '\n';
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
