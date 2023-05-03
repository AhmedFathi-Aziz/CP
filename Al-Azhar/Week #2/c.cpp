#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> a(n);
    for (auto &i : a)
        cin >> i.first >> i.second;

    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (s > a[i].first)
            s += a[i].second;
        else
            return cout << "NO\n", void();
    }
    cout << "YES\n";
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
