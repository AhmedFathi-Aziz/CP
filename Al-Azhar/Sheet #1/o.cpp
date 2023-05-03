#include <bits/stdc++.h>
using namespace std;
#define ll long long

int to_int(string s) {
    int out = 0;
    int base = 1;
    for (int i = s.length() - 1; i >= 0; i--)
        out += (s[i] - '0') * base, base *= 10;
    return out;
}

void doWork() {
   int a, b;
   char op;
   cin >> a >> op >> b;
   if (op == '+')
        cout << a + b;
   else if (op == '-')
        cout << a - b;
   else if (op == '*')
        cout << a * b;
   else cout << a / b;     
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifdef ONLINE_JUDGE
#endif

    int cases = 1;
    // cin >> cases;
    while (cases--)
        doWork();
    return 0;
}
