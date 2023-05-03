#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool lucky(int n) {
    while (n > 0) {
        if (!(n % 10 == 4 || n % 10 == 7))
            return false;
        n /= 10;
    }
    return true;
}

void doWork() {
    int a, b;
    cin >> a >> b;
    
    bool pass = false;
    for (int i = a; i <= b; i++) {
        if (lucky(i))
            cout << i << ' ', pass = true;
    }
    if (!pass)
        cout << -1 << endl;
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
