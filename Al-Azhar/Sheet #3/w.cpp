#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n, m;
    cin >> n >> m;
    int grid[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];
    
    for (int i = 0; i < n; i++) {
        for (int j = m - 1; j >= 0; j--)
            cout << grid[i][j] << ' ';
        cout << endl;
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
