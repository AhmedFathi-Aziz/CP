#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n, q;
    cin >> n >> q;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i)
            a[i] += a[i - 1];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--, r--;

        if (l)
            cout << a[r] - a[l - 1] << endl;
        else cout << a[r] << endl;
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
