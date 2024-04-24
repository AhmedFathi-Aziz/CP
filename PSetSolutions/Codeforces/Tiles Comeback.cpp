#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        bool fail = true;
        if (a[0] == a[n - 1]) {
            for (int i = 1; i < n - 1; i++) {
                if (a[i] == a[0])
                    ans++;
            }
            if (ans + 2 >= k)
                fail = false;
        } else {
            int index = 0;
            int left = 0, right = 0;
            for (int i = 0; i < n; i++)
                if (a[i] == a[0]) {
                    left++;
                    if (left == k) {
                        index = i;
                        break;
                    }
                }
            for (int i = n - 1; i > index; i--)
                if (a[n - 1] == a[i])
                    right++;
            if (left >= k && right >= k)
                fail = false;
        }
        if (fail)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
