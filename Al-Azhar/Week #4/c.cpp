#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> a(n);
    for (auto &i : a)
        cin >> i.first >> i.second;
    

    int location = a[0].second;
    if (a[0].first != 0)
        return puts("no"), void();

    for (int i = 1; i < n; i++) {
        if (a[i].first <= location)
            location = max(a[i].second, location);
        else break;
    }
    if (location >= m)
        puts("yes");
    else puts("no");
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
