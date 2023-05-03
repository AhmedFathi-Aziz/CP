#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int n;
    cin >> n;
    int a[n];
    for (int &i : a)
        cin >> i;
    string s;
    cin >> s;

    map<int, char> mp;
    for (int i = 0; i < n; i++) {
        if (mp.find(a[i]) == mp.end())
            mp[a[i]] = s[i];
        else
            if (mp[a[i]] != s[i])
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