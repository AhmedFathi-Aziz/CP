#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    ll m;
    cin >> n >> m;
    ll a[n];
    for (ll &i : a)
        cin >> i;

    int l = 0, r = 0;

    ll cur = 0, out = 0;
    while (l < n) {
        if (r < n && cur + a[r] <= m) {
            cur += a[r++];
            out = max(cur, out);
        }
        else
            cur -= a[l++];
    }
    cout << out << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int cases = 1;
   // cin >> cases;
   while (cases--)
       doWork();
    return 0;
}
