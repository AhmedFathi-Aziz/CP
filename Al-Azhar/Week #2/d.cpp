#include <bits/stdc++.h>
using namespace std;
#define ll long long

int remove(int n) {
    int out = 0;

    int base = 1;
    while (n > 0) {
        if (n % 10 != 0)
            out += n % 10 * base, base *= 10;
        n /= 10;
    }
    return out;
}

void doWork() {
    int a, b, c;
    cin >> a >> b;
    c = a + b;
    if (remove(a) + remove(b) == remove(c))
        cout << "YES" << endl;
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
