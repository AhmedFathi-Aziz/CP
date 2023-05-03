#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool prime(int n) {
    if (n == 1)
        return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

void doWork() {
    int n;
    cin >> n;
    if (prime(n))
        puts("YES");
    else puts("NO");
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
