#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int k, n;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i)
            a[i] += a[i - 1];
    }
    double out = DBL_MIN;;
    while (k <= n) {
        for (int i = 0; i <= n - k; i++)
            out = max(out, (a[i + k - 1] - (i ? a[i - 1] : 0)) / (k * 1.0));
        k++;
    }
    cout << fixed << setprecision(6);
    cout << out << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases = 1;
    // cin >> cases;
    while (cases--)
        doWork();
    return 0;
}
