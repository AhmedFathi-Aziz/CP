#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    ll n, k;
    cin >> n >> k;

    ll mid = n / 2;
    if (n & 1)
        mid++;
    
    if (k <= mid)
        cout << (k * 2) - 1 << endl;
    else
        cout << (k - mid) * 2 << endl;
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
