#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    ll n;
    cin >> n;

    ll sum = n * (n + 1) / 2;
    ll minus = 0;
    for (ll i = 1; i <= n; i *= 2)
        minus += i;
    cout << sum - minus - minus << endl;    
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
