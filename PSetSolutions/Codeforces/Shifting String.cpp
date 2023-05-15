#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   string a;
   cin >> n >> a;
   int p[n];
   for (int &i : p)
      cin >> i, i--;
   bool visited[209] = {};
   ll lcm = 1;
   for (int i = 0; i < n; i++) {
      if (visited[i])
         continue;
      int j = i;
      string s;
      while (!visited[j]) {
         s += a[j];
         visited[j] = true;
         j = p[j];
      }
      string cur = s;
      ll len = 0;
      while (true) {
         char ch = cur.back();
         cur.pop_back();
         string b = cur;
         cur = ch + b;
         len++;
         if (cur == s)
            break;
      }
      
      lcm = (lcm / __gcd(lcm, len)) * len;
   }
   cout << lcm << '\n';
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
