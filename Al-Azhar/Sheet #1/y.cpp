#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int out = (a % 100) * (b % 100) * (c % 100) * (d % 100);
    
    int u = out;
    u /= 10;
    if (u % 10 == 0)
        cout << 0 << out % 10;
    else cout << out % 100;
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
