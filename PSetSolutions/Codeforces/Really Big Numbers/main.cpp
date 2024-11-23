#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll n, ll s) {
    int sum = 0;
    ll m = n;
    while (m) {
        sum += m % 10;
        m /= 10;
    }
    return n - sum >= s;
}

int main() {
    ll n, s;
    cin >> n >> s;

    ll l = 1, h = n;
    ll mid = 0;
    ll out = 0;
    while (l <= h) {
        mid = l + (h - l) / 2;
        if (check(mid, s)) {
            out = mid;
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    if (!out)
        cout << 0;
    else    
        cout << n - out + 1;
    return 0;
}
