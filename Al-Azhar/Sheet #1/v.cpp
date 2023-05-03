#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int a, b;
    char op;
    cin >> a >> op >> b;
    if (op == '=') {
        if (a == b)
            cout << "Right\n";
        else cout << "Wrong\n";    
    }
    else if (op == '>') {
        if (a > b)
            cout << "Right\n";
        else cout << "Wrong\n";
    }
    else {
        if (a < b)
            cout << "Right\n";
        else cout << "Wrong\n";
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
