#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool valid(int n, int m, int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

void doWork() {
    int di[] {-1, 1, 0, 0, -1, 1, 1, -1};
    int dj[] {0, 0, 1, -1, 1, -1, 1, -1};

    int n, m;
    cin >> n >> m;
    char grid[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    int x, y;
    cin >> x >> y;
    x--, y--;
    for (int i = 0; i < 8; i++) {
        int row = x + di[i];
        int col = y + dj[i];

        if (valid(n, m, row, col) && grid[row][col] != 'x')
            return cout << "no\n", void();
    }
    cout << "yes\n";
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
