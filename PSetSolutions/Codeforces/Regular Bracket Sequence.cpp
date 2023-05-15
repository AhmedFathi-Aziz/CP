#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string s;
    cin >> s;
    stack<char> stk;
    int out = 0;
    for (char &i : s) {
        if (i == '(')
            stk.push(i);
        else {
            if (!stk.empty()) {
                out += 2;
                stk.pop();
            }
        }
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
