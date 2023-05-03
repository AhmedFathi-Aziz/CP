#include <bits/stdc++.h>
using namespace std;
#define ll long long

void print(int n) {
    for (int i = 1; i <= n; i++) {
        cout << i;
        if (i != n) cout << ' ';
    }
}

void doWork() {
    int n;
    cin >> n;
    print(n);
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
