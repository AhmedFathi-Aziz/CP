#include <bits/stdc++.h>
using namespace std;

bool lucky(int n) {
    while (n) {
        if (!(n % 10 == 4 || n % 10 == 7))
            return false;
        n /= 10;
    }
    return true;
}

void doWork() {
    int n;
    cin >> n;

    bool fail = true;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (lucky(i) || lucky(n / i)) {
                fail = false;
                break;
            }
        }
    }
    if (!fail) cout << "YES" << endl;
    else cout << "NO" << endl;
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