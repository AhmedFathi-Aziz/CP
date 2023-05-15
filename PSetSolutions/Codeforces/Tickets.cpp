#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   queue<int> q;
   --n;
   int a, b;
   
   cin >> a >> b;
   q.push(b);
   while (n--) {
      cin >> a >> b;
      if (a == 1) {
         q.push(b);
      }
      else {
         if (b == q.front())
            cout << "Yes" << endl;
         else cout << "No" << endl;
         q.pop();
      }
   }
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