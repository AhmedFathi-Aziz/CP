#include <bits/stdc++.h>
using namespace std;

void doWork() {
    const int n = 8;
    char grid[n][n];
    for (int i = 0; i < n; i ++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 'R')
                count++;
        }
        if (count == n)
            return cout << "R\n", void();
        count = 0;
    }
    cout << "B\n";
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