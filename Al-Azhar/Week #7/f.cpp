#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n, k;
    cin >> n >> k;
    int a[n + 9], b[n + 9];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    
    int out = 0;
    for (int i = 1; i <= n; i++) {
        if (b[i]) {
            out += a[i];
            a[i] = 0;
        }
        a[i] += a[i - 1];
    }
    int sum = 0;
    for (int i = 1; i <= n - k + 1; i++)
        sum = max(sum, a[i + k - 1] - a[i - 1]);
    cout << out + sum << endl;
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
