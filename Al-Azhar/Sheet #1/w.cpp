#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int a, b, c;
    char op, skip;
    cin >> a >> op >> b >> skip >> c;
    if (op == '+') {
        if (a + b == c)
            cout << "Yes\n";
        else cout << a + b << '\n';
    }
    else if (op == '*') {
        if (a * b == c)
            cout << "Yes\n";
        else cout << a * b << '\n';
    }
    else {
        if (a - b == c)
            cout << "Yes\n";
        else cout << a - b << '\n';
    }
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
