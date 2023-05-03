#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (r1 < l2 || l1 > r2)
        cout << -1 << '\n';
    else cout << max(l2, l1) << ' ' << min(r2, r1) << '\n';
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
