#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    string a, b;
    cin >> n >> a >> b;

    for (int i = 0; i < n; i++) {
        if (a[i] == 'R' || b[i] == 'R')
            if (a[i] != b[i])
                return cout << "no\n", void();
    }
    cout << "yes\n";
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
