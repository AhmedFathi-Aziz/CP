#include <bits/stdc++.h>
using namespace std;

int f1[100][100];
int f2[100][100];

void sum(int n, int m, int i = 0, int j = 0) {
    if (j == m) {
        i++;
        j = 0;
        if (i == n)
            return;
    }
    f1[i][j] += f2[i][j];
    sum(n, m, i, j + 1);
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> f1[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> f2[i][j];
    sum(n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << f1[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}
