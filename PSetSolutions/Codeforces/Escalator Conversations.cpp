#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m, k, h;
        cin >> n >> m >> k >> h;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        for (int i = 1; i < m; i++) {
            for (int j = i + 1; j <= m; j++) {
                int diff = (j - i) * k;
                for (int l = 0; l < n; l++) {
                    if (a[l] && diff == abs(h - a[l]))
                        ans++, a[l] = 0;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

