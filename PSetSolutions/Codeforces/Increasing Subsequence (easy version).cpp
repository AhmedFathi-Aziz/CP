#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   deque<int> dq;
   while (n--) {
      int u;
      cin >> u;
      dq.push_back(u);
   }
   int out = 0;
   string answer;

   while (!dq.empty()) {
      if (dq.front() > out && dq.back() > out) {
         if (dq.front() < dq.back())
            answer.push_back('L'),
            out = dq.front(),
            dq.pop_front();
         else
            answer.push_back('R'),
            out = dq.back(),
            dq.pop_back();
      }
      else if (dq.front() > out)
         answer.push_back('L'),
         out = dq.front(),
         dq.pop_front();
      else if (dq.back() > out)
         answer.push_back('R'),
         out = dq.back(),
         dq.pop_back();
      else
         break;
   }
   cout << answer.length() << '\n';
   cout << answer << '\n';
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
