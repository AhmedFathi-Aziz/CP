#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int n;
    cin >> n;
    int grid[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    int out = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
            bool flag = true;
            for (int k = 0; k < n; k++) {
                if (grid[i][k] != grid[k][j])
                    flag = false;
            }
            if (flag)
                out++;
        }
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
