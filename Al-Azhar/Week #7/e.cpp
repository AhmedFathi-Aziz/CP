#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n, k;
    cin >> n >> k;

    int a[n + 9];
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    
    int mini = 1e9, index = 0;
    for (int i = 1; i <= n - k + 1; i++) {
        int sum = a[i + k - 1];
        sum -= a[i - 1];

        if (sum < mini)
            mini = sum, index = i;
    }
    cout << index << endl;
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
