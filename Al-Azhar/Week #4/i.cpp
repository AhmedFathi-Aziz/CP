#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e5 + 9;

void doWork() {
    int n, k, q;
    cin >> n >> k >> q;

    int a[N];
    memset(a, 0, sizeof(a));
    while (n--) {
        int l, r;
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }
    for (int i = 1; i < N; i++)
        a[i] += a[i - 1];

    for (int i = 1; i < N; i++) {
        a[i] = (a[i] >= k);
        a[i] += a[i - 1];
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << a[r] - a[l - 1] << endl;
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
