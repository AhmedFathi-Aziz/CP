#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        pair<int, int> a[n];
        pair<int, int> b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
            b[i].first = a[i].first;
            b[i].second = i;
        }
        sort(b, b + n);
        bool fail = false;
        for (int i = 0; i < n; i++) {
            if (b[i].first != a[i].first) {
                if ((b[i].first % 2 && a[i].first % 2) || (b[i].first % 2 == 0 && a[i].first % 2 == 0)) {
                    swap(a[a[i].second], a[b[i].second]);
                }
                else {
                    fail = true;
                    break;
                }
            }
        }
        if (fail)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
    return 0;
}
