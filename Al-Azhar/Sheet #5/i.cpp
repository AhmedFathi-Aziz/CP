#include <bits/stdc++.h>
using namespace std;
#define ll long long

int grid[500][500];

void swap(int a, int b, int n) {
    for (int i = 0; i < n; i++)
        swap(grid[a][i], grid[b][i]);
    for (int i = 0; i < n; i++)
        swap(grid[i][a], grid[i][b]);
}

void doWork() {
    int n, a, b;
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];
    a--, b--;
    swap(a, b, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
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
