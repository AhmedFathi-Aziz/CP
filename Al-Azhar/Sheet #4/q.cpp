#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string a;
    getline(cin, a);
    a += ' ';
    int n = a.length();
    int l = 0, r;
    for (int i = 0; i < n; i++) {
        if (a[i] == ' ') {
            r = i - 1;
            for (; r >= l; r--)
                cout << a[r];
            l = i + 1;
            if (i + 1 != n)
                cout << ' ';
        }
    }
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
