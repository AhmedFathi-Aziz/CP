#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int n;
    cin >> n;
    if (n == 3)
        return cout << -1 << endl, void();
    cout << n-- << ' ' << n-- << ' ';
    for (int i = 1; i <= n; i++)
        cout << i << ' ';
    cout << endl;
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