#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;

    ll f0 = -1, f1 = 1, f3;
    while (n--) {
        f3 = f0 + f1;
        f0 = f1;
        f1 = f3;
    }
    cout << f3 << endl;
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
