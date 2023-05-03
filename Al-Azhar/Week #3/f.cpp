#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;

    ll a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i], b[i] = a[i];
        if (i)
            a[i] += a[i - 1];
    }
    sort(b, b + n);
    for (int i = 1; i < n; i++)
        b[i] += b[i - 1];
    int m;
    cin >> m;
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;
        l--, r--;
        if (type == 1) {
            if (l)
                cout << a[r] - a[l - 1] << '\n';
            else cout << a[r] << '\n';
        }
        else {
            if (l)
                cout << b[r] - b[l - 1] << '\n';
            else cout << b[r] << '\n';
        }
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
