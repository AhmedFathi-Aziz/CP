#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int maxi = a[n - 1];
    int out[n];
    
    out[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] <= maxi)
            out[i] = maxi - a[i] + 1;
        else out[i] = 0, maxi = max(maxi, a[i]);
    }
    for (int i = 0; i < n; i++)
        cout << out[i] << ' ';
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
