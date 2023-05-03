#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    // two pointers
    // int n, t;
    // cin >> n >> t;
    // int a[n];
    // for (int &i : a)
    //     cin >> i;
    
    // int sum = 0;
    // int out = 0;
    // int l = 0, r = 0;
    // while (l < n) {
    //     while (r < n && sum + a[r] <= t) {
    //         sum += a[r++];
    //         out = max(out, r - l);
    //     }
    //     sum -= a[l++];
    // }
    // cout << out << endl;


    // bs

    int n, t;
    cin >> n >> t;
    int a[n + 1];
    a[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] = a[i] +  a[i - 1];
    }
    int out = 0;
    for (int i = 1; i <= n; i++) {
        int low = i, high = n;
        int len = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int sum = a[mid] - a[i - 1];
            if (sum <= t) {
                len = mid - i + 1;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        out = max(out, len);
    }
    cout << out << endl;
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