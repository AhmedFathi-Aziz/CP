#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int y, k, n;
    cin >> y >> k >> n;

    n = n - y;
    y = k - y % k;
    bool pass = false;
    while (y <= n) {
        cout << y << ' ';
        y += k;
        pass = true;
    }
    if (!pass)
        puts("-1");
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
