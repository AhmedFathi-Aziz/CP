#include <bits/stdc++.h>
using namespace std;

long long suffix(int *a, int n, int m) {
    if (!m)
        return 0;
    return a[n] + suffix(a, n - 1, m - 1);
}


int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int &i : a)
        cin >> i;
    --n;
    cout << suffix(a, n, m);
    return 0;
}
