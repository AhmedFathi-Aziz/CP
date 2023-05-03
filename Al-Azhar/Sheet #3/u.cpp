#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n, m;
    cin >> n >> m;
    int a[n], b[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == b[j])
            j++;
    }
    j == m ? cout << "YES\n" : cout << "NO\n";
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
