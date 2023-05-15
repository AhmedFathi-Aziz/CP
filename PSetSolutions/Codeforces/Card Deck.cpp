#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   stack<int> stk;
   vector<int> freq(n + 1, 0);
   for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      stk.push(a);
   }
   int mx = n;
   deque<int> out;
   while (!stk.empty()) {
      out.push_back(stk.top());
      if (stk.top() == mx) {
         while (!out.empty()) {
            cout << out.back() << ' ';
            freq[out.back()] = 1;
            out.pop_back();
         }
         while (freq[mx])
            mx--;
      }
      stk.pop();
   }
   cout << '\n';
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
