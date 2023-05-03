#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;
    int a[n];

    int maxi = 0, mini = 1e7;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
    }

    int so = maxi + mini;
    map<int, int> mp;
    
    ll out = 0;
    for (int j = 0; j < n; j++) {
        if (mp.find(so - a[j]) != mp.end())
            out += mp[so - a[j]];

        mp[a[j]]++;   
    }
    cout << out << endl;
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
