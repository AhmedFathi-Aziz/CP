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

    int x;
    cin >> x;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == x)
                return cout << "will not take number\n", void();
        }
    }
    cout << "will take number\n";
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
