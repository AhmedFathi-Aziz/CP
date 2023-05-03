#include <bits/stdc++.h>
using namespace std;
#define ll long long

int lol(ll n) {
    if (n == 1)
        return 0;
    return 1 + lol(n / 2);
}

int main() {
    ll n;
    cin >> n;
    cout << lol(n);
    return 0;
}
