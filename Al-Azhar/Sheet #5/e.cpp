#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int a, b;
    cin >> a >> b;

    b = a + b;
    a = b - a;
    b = b - a;

    cout << a << ' ' << b;
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
