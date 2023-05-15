#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n, k;
    string a;
    cin >> n >> k >> a;

    int i = 0;
    map<char, int> mp;
    for (; i < k; i++)
        mp[a[i]]++;
    
    int out = mp.size();
    
    while (i < n) {
        out = max(out, (int) mp.size());
        mp[a[i - k]]--;
        if (mp[a[i - k]] == 0)
            mp.erase(a[i - k]);
        mp[a[i++]]++;
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