#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    double n;
    cin >> n;
    int a = n;
    n -= a;
    if (n) {
        cout << "float " << a << ' ' << n << '\n';
    }
    else cout << "int " << a << '\n';
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
