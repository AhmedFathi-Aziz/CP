#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n, k;
    cin >> n >> k;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i)
            a[i] += a[i - 1];
    }
    int out = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        if (a[i] == k)
            out = max(out, i + 1);
        if (mp.find(a[i] - k) != mp.end()) {
            int index = mp[a[i] - k];
            out = max(out, i - index);
        }
        mp[a[i]] = i;
    }
    cout << out << endl;
    return 0;
}
