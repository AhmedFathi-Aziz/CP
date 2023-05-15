#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int n;
    cin >> n;

    int a[n], d[n];
    for (int i = 0; i < n; i++)
        cin >> d[i];
    a[0] = d[0];
    
    for (int i = 1; i < n; i++) {
        int val = d[i] + a[i - 1];

        int other = abs(a[i - 1] - d[i]);
        if (other != val) {
            if (abs(other - a[i - 1]) == d[i])
                return cout << -1 << '\n', void();
        }
        a[i] = val;
    }
    
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifdef ONLINE_JUDGE
#endif

    int cases = 1;
    cin >> cases;
    while (cases--)
        doWork();
    return 0;
}