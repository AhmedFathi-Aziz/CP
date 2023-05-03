#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int n, m;
    cin >> n >> m;

    if (n <= 3 && m <= 3) 
        cout << max(1, n - 1) << ' ' << max(1, m - 1) << '\n';
    else cout << n << ' ' << m << '\n';
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