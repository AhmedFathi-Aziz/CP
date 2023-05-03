#include <bits/stdc++.h>
using namespace std;
#define ll long long


void doWork() {
    int n, m;
    cin >> n >> m;
    ll a[n];
    for (ll &i : a)
        cin >> i;
    
    int l = 0, r = 0;
    int len = 1e6;
    ll sum = 0;
    while (l < n) {
        while (r < n && sum < m)
            sum += a[r++];
        
        if (sum >= m)
            len = min(len, r - l);
        sum -= a[l++];
    }
    cout << (len == 1e6 ? -1 : len) << endl;
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