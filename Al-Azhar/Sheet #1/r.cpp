#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;
    // cout << n / 365 << " years\n";
    // n %= 365;
    // cout << n / 30 << " months\n";
    // n %= 30;
    // cout << n << " days\n";

    cout << n / 365 << " years\n";
    n -= (n / 365) * 365;
    cout << n / 30 << " months\n";
    n -= (n / 30) * 30;
    cout << n << " days";
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
