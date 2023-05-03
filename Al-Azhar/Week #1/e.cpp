#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;
    int a[n];

    int maxi = -1e9, mini = 1e9;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
    }
    
    int out = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++)
            if (a[i] + a[j] == maxi + mini)
                out++;
    }
    cout << out << '\n';
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
