#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n, k;
    cin >> n >> k;
    deque<int> dq;
    int a;
    while (n--) {
        cin >> a;
        dq.push_back(a);
    }
    int out = 0;
    for (;!dq.empty();) {
        if (dq.front() <= k) {
            out++;
            dq.pop_front();
        }
        else if (dq.back() <= k) {
            out++;
            dq.pop_back();
        }
        else 
            break;
    }
    cout << out << endl;
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
