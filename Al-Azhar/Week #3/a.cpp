#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    ll n;
    cin >> n;

    ll even = n / 2;
    ll odd = n / 2;

    if (n & 1)
        odd++;
    cout << (even * (even + 1)) - (odd * odd) << endl;
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
