#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e5 + 9;

void doWork() {
    int n, q;
    cin >> n >> q;
    int ranged[N], a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    memset(ranged, 0, sizeof(ranged));
    while (q--) {
        int l, r;
        cin >> l >> r;
        ranged[l]++;
        ranged[r + 1]--;
    }
    for (int i = 1; i < N; i++)
        ranged[i] += ranged[i - 1];
    
    sort(a, a + n, greater<int>());
    sort(ranged, ranged + N, greater<int>());
    
    ll out = 0;
    for (int i = 0; i < n; i++)
        out += (ll) a[i] * ranged[i];
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
