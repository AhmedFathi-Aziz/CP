#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;
    string a;
    cin >> a;

    ll maxi = 1, dis = 1;
    int x = 0, y = 0;
    
    a[0] == '0' ? ++y : ++x;
    for (int i = 1; i < n; i++) {
        x += (a[i] == '1');
        y += (a[i] == '0');

        if (a[i] == a[i - 1]) {
            dis++;
            maxi = max(maxi, dis * dis);
        }
        else {
            dis = 1;
        }
    }
    cout << max(maxi, (ll) x * y) << '\n';
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