#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int u;
        cin >> u;
        mp[u] = i + 1;
    }
    int out = -1;
    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j <= 1000; j++) {
            if (mp.find(i) != mp.end() && mp.find(j) != mp.end() && __gcd(i, j) == 1)
                out = max(out, mp[i] + mp[j]);
        }
    }
    cout << out << endl;
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