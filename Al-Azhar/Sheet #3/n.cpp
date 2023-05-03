#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int a, b;
    string s;
    cin >> a >> b >> s;

    if (s[a] != '-')
        return cout << "No\n", void();
    bool pass = true;
    for (int i = 0; i < s.length(); i++) {
        if (i == a)
            continue;
        if (!('0' <= s[i] && s[i] <= '9'))
            pass = false;
    }
    if (pass)
        cout << "Yes\n";
    else cout << "No\n";
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
