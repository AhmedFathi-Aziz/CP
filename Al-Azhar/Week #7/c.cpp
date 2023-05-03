#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;
    if (n == 1 || n > 26)
        return cout << "Yes\n", void();

    int a[26] {0};
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if (++a[c - 'a'] >= 2)
            return cout << "Yes\n", void();
    }
    cout << "No\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases = 1;
    // cin >> cases;
    while (cases--)
        doWork();
    return 0;
}
