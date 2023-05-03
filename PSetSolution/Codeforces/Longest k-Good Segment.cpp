#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &i : a)
        cin >> i;
    
    map<int, int> mp;
    int l = 0, r = 0;

    int s = 0, e = 0;
    while (r < n) {
        if (mp.size() <= k) {
            mp[a[r++]]++;
            if (mp.size() <= k && r - l >= e - s + 1)
                s = l + 1, e = r;
        }
        else {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
                mp.erase(a[l]);
            l++;
        }
    }

    cout << s << ' ' << e << endl;
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